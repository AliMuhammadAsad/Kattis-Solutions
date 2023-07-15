try:
    while True:
        a, b = map(int, input().split())
        d = a - b
        if d >= 0: print(d)
        else: print(-1*d)
except EOFError:
    pass

# Runtime: 0.05s