#Testing of some simple stuff

with open('basic_x.dat', 'w') as xf, open('basic_y.dat', 'w') as yf:
    for y in range(0,4):
        for x in range(0,4):
            for offset_x in range(1,4):
                yf.write(f"{y}\n")
                xf.write(f"{(x+offset_x)%4}\n")
            for offset_y in range(1,4):
                yf.write(f"{(y+offset_y)%4}\n")
                xf.write(f"{x}\n")
