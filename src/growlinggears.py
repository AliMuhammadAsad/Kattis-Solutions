def optimisedPoint(a, b, c):
    return ((b**2 - b)//(2*a)) + c

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        maxpt = 0
        gear = 0
        for i in range(1, n + 1):
            a, b, c = map(int, input().split())
            optim = optimisedPoint(a, b, c)
            print(f"Gear {i}, Optimised Point {optim}")
            if optim >= maxpt:
                maxpt = optim
                gear = i
        print(gear)


# T = -aR^2 + bR + c
# dT/dr => 0 = -2aR + b => 2aR = b => R = b/2a
# Topt = -2a(b/2a)^2 + b(b/2a) + c 
# Topt = -b/2a + b^2/2a + c
# Topt = (b^2 - b)/2a + c
