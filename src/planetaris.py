def maxwon(n, a, ships):
    ships.sort()
    w = 0
    for i in range(n):
        if a > ships[i]:
            w += 1
            a -= (ships[i] + 1)
        else: break
    return w

n, a = map(int, input().split())
ships = list(map(int, input().split()))

print(maxwon(n, a, ships))