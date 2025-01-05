# This script does basic sanity checks on the packet logs :)

import csv
import argparse
import sys
import os

parser = argparse.ArgumentParser()
parser.add_argument('-X', type=int, dest='X', default = 4)
parser.add_argument('-Y', type=int, dest='Y', default = 4)
parser.add_argument('-P', type=int, dest='PACKLIMIT', default = 6)
parser.add_argument('-f', dest='logFile', default = "log.csv")

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

def getPacketInfo(pktId, pkt, PACKLIMIT, X_MAX):
    pktId = int(pktId)
    send_y = (pktId//PACKLIMIT) // X_MAX
    send_x = (pktId//PACKLIMIT) % X_MAX
    return [send_x, send_y, pktId%PACKLIMIT + 1, pkt[1], pkt[2], pkt[0]]

def main():
    # Processing packet logs... 
    with open(args.logFile) as f:
        for logType, time, pktId, X, Y in csv.reader(f, delimiter=','):
            if(logType == 'A'): 
                continue
    
            if(logType == 'S'):
                sent[pktId] = (time, X, Y);
            elif(logType == 'M'):
                recv[pktId] = (time, X, Y);
            else:
                print("Unrecognized Log Type", file=sys.stderr)
                exit(1)
    
    for pktId in recv:
        assert pktId in sent, f"Packet with id {pktId} that has not been sent was received at {X} {Y}"
        assert int(recv[pktId][0]) >= int(sent[pktId][0]), f"Packet {pktId} received before it was sent, {recv[pktId][0]}, {sent[pktId][0]}"
    
    numMismatched = 0
    numLost = 0
    
    # Write results to a new log: Sender, Packet Number, Time Sent, Destination, In flight time
    with open('times.csv', 'w') as f, open('lostSummary.csv', 'w') as lf, open('mismatchedSummary.csv', 'w') as mmf:
    
        time_writer = csv.writer(f, delimiter=',')
        time_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Dest X", "Dest Y", "Time Sent", "In Flight Time"])
    
        lost_writer = csv.writer(lf, delimiter=',')
        lost_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Dest X", "Dest Y", "Time Sent"]);
    
        mm_writer = csv.writer(mmf, delimiter=',')
        mm_writer.writerow(["Sender X", "Sender Y", "Pkt Num", "Dest X", 
                            "Dest Y", "Time Sent", "Reciever X", "Receiver Y", "Time Received"]);
    
        for pktid in sorted(sent):
            pktInfo = getPacketInfo(pktid, sent[pktid], PACKLIMIT, X_MAX);
    
            # Check for lost packets
            if(pktid not in recv):
                numLost += 1;
                lost_writer.writerow(pktInfo);
                continue
    
            sentInfo = sent[pktid];
            recvInfo = recv[pktid];
    
            # Send Receive Destination Mismatch
            if(sentInfo[1] != recvInfo[1] or sentInfo[2] != recvInfo[2]):
                numMismatched += 1;
                mm_writer.writerow(pktInfo + [recvInfo[1], recvInfo[2], recvInfo[0]])
                continue
    
            inFlightTime = int(recv[pktid][0]) - int(sent[pktid][0]);
            time_writer.writerow(pktInfo + [inFlightTime])
    
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
