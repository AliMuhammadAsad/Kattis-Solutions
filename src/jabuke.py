import math

def area(a, b, c):
    return abs((a[0] * (b[1] - c[1])) + (b[0] * (c[1] - a[1])) + (c[0] * (a[1] - b[1]))) / 2

def isInside(a, b, c, pt):
    A = area(a, b, c)
    A1 = area(pt, b, c)
    A2 = area(a, pt, c)
    A3 = area(a, b, pt)
    return abs(A - (A1 + A2 + A3)) < 1e-9

if __name__ == "__main__":
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = list(map(int, input().split()))
    n = int(input())
    print(area(a, b, c))
    count = 0
    for i in range(n):
        pt = list(map(int, input().split()))
        if isInside(a, b, c, pt): count += 1
    print(count)