def pos():
    #  input from https://adventofcode.com/2021/day/2/input       
    with open('input.txt', 'r') as f:
        hpos = 0
        depth = 0
        for x in f:
            if x.find('forward') >= 0:
                hpos += int(x[x.find(' ') + 1:])
            elif x.find('up') >= 0:
                depth -= int(x[x.find(' ') + 1:])
            else:
                depth += int(x[x.find(' ') + 1:])

    print(hpos*depth)

if __name__ == "__main__":
    pos()
    pass
