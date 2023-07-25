lo = 1; hi = 1000
while True:
    mid = (lo + hi) // 2
    print(mid); inp = input()
    if inp == "correct": break
    elif inp == "higher":
        lo = mid + 1
    else:
        hi = mid