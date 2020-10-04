def fatorial(num):
    f = 1
    for c in range(num, 0, -1):
        f *= c
        if c > 1:
            print(c,end=" x ")
        if c == 1:
            print(c, end=" = ")
    print(f)


fatorial(-6)
