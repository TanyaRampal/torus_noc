# This script does basic sanity checks on the packet logs :)

import csv
import argparse
import sys
import os

parser = argparse.ArgumentParser()
parser.add_argument('-X', type=int, dest='X', default = 4)
parser.add_argument('-Y', type=int, dest='Y', default = 4)
parser.add_argument('-P', type=int, dest='PACKLIMIT', default = 12)

args = parser.parse_args()

PACKLIMIT = args.PACKLIMIT;

ascii_thank = r'''
                                   ___
                               ,-""   `.
       Thank Mr. Goose       ,'  _   ' )`-._
                            /  ,' `-._<.===-'
                           /  /
                          /  ;
              _          /   ;
 (`._    _.-"" ""--..__,'    |
 <_  `-""                     \
  <`-                          :
   (__   <__.                  ;
     `-.   '-.__.      _.'    /
        \      `-.__,-'    _,'
         `._    ,    /__,-'
            ""._\__,'< <____
                 | |  `----.`.
                 | |        \ `.
                 ; |___      \-``
                 \   --<
                  `.`.<
                    `-'

'''


ascii_hisssss = r'''
                                                        _...--.
                                        _____......----'     .'
                                  _..-''                   .'
                                .'                       ./
                        _.--._.'                       .' |
                     .-'                           .-.'  /
  HISSSSS!!        .'   _.-.                     .  \   '
                 .'  .'   .'    _    .-.        / `./  :
               .'  .'   .'  .--' `.  |  \  |`. |     .'
            _.'  .'   .' `.'       `-'   \ / |.'   .'
         _.'  .-'   .'     `-.            `      .'
       .'   .'    .'          `-.._ _ _ _ .-.    :
      /    /o _.-'               .--'   .'   \   |
    .'-.__..-'                  /..    .`    / .'
  .'   . '                       /.'/.'     /  |
 `---'                                   _.'   '
                                       /.'    .'
                                        /.'/.'

'''

X_MAX = args.X;
Y_MAX = args.Y;

sent = dict()
recv = dict()

def main():
    # Processing packet logs... 
    for x in range(4):
        for y in range(4):
            with open(f"sim/output.hex_{x}_{y}") as f:
                for row in csv.reader(f, delimiter=','):
                    logType, cycle, x_dest, y_dest, data = row

                    #Note that the data is unique!

                    if(logType == 'A'): #Ignore attempts for connecting verification
                        continue

                    if(logType == 'S'):
                        sent[data] = (int(cycle), x, y, int(x_dest), int(y_dest))
                    elif(logType == 'R'):
                        recv[data] = (int(cycle), x, y, int(x_dest), int(y_dest))
                    else:
                        print("Unrecognized Log Type", file=sys.stderr)
                        exit(1)


    for pktId in recv:
        assert pktId in sent, f"Packet with contents {pktId} that has not been sent was received"
        assert int(recv[pktId][0]) >= int(sent[pktId][0]), f"Packet with contents {pktId} received before it was sent"
    
    numMismatched = 0
    numLost = 0
    
    # Write results to a new log: Sender, Packet Number, Time Sent, Destination, In flight time
    with open('times.csv', 'w') as f, open('lostSummary.csv', 'w') as lf, open('mismatchedSummary.csv', 'w') as mmf:
    
        time_writer = csv.writer(f, delimiter=',')
        time_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Data Unpacked", "Dest X", "Dest Y", "Time Sent", "Time Received", "In Flight Time"])
    
        lost_writer = csv.writer(lf, delimiter=',')
        lost_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Data Unpacked", "Dest X", "Dest Y", "Time Sent"]);
    
        mm_writer = csv.writer(mmf, delimiter=',')
        mm_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Data Unpacked", "Dest X", 
                            "Dest Y", "Time Sent", "Reciever X", "Receiver Y", "Time Received"]);
    
        for pktid in sorted(sent):
            send_cycle, sender_x, sender_y, x_dest, y_dest = sent[pktid]
            pkt_number = int(pktid, 16) & 0b1111;

            pktInfo = [sender_x, sender_y, pkt_number, pktid, x_dest, y_dest, send_cycle];
    
            # Check for lost packets
            if(pktid not in recv):
                numLost += 1;
                lost_writer.writerow(pktInfo);
                continue
            
            recv_cycle, recv_x, recv_y, x_dest, y_dest = recv[pktid]
    
            # Send Receive Destination Mismatch
            if(x_dest != recv_x or y_dest != recv_y):
                numMismatched += 1;
                mm_writer.writerow(pktInfo + [recv_x, recv_y, recv_cycle])
                continue
    
            inFlightTime = int(recv_cycle) - int(send_cycle);
            time_writer.writerow(pktInfo + [recv_cycle, inFlightTime])
    
    assert (len(recv) == 4*4*12)
    #Dump lost packet information
    if(numLost > 0):
        print(f"{numLost} Lost packets detected. Information dumped to lostSummary.csv", file=sys.stderr)
    else:
        os.remove('lostSummary.csv');
    
    if(numMismatched > 0):
        print(f"{numMismatched} mismatched packets. "
                "Destination and received location do not match. "
                "Information dumped to mismatchedSummary.csv", file=sys.stderr);
    else:
        os.remove('mismatchedSummary.csv');
    
    if(numLost > 0 or numMismatched > 0):
        raise Exception("Lost or Mismatched detected")

try:
    main()
    print(ascii_thank)
except Exception as e:
    print(e)
    print(ascii_hisssss)
