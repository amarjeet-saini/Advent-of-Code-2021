def pos():
    # input from https://adventofcode.com/2021/day/2/input    
    with open('input.txt', 'r') as f:
        hpos = 0
        depth = 0
        aim = 0
        for x in f:
            if x.find('forward') >= 0:
                temp = int(x[x.find(' ') + 1:])
                hpos += temp
                depth += aim * temp

            elif x.find('up') >= 0:
                temp = int(x[x.find(' ') + 1:])
                aim -= temp
            else:
                temp = int(x[x.find(' ') + 1:])
                aim += temp

    print(hpos*depth)

if __name__ == "__main__":
    pos()
