c, k = map(int, input().split())

zeros = 10**k
c /= zeros
c = round(c)
c *= zeros

print(c)