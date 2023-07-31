import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

if __name__ == "__main__":
    n = int(input())
    a = math.prod(list(map(int, input().split())))
    m = int(input())
    b = math.prod(list(map(int, input().split())))
    if a == 1 or b == 1:
        print(1)
    else: 
        gd = str(gcd(a, b))
        if len(gd) > 9:
            print(gd[-9:])
        else: print(gd)
