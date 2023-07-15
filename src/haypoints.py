m, n = map(int, input().split())
hp = {}
for i in range(m):
    inp = input().split()
    hp[inp[0]] = int(inp[1])
for i in range(n):
    desc = []
    while True:
        line = input()
        if line == ".": break
        words = line.split()
        desc.extend(words)
    hayday = 0
    for word in desc:
        if word in hp:
            hayday += hp[word]
    print(hayday)