import math

def factsize(n):
    if n <= 3: return 1
    return math.floor((n * math.log10(n)) - (n * math.log10(math.e)) + math.log10(2 * math.pi * n) / 2) + 1
    
while True:
    try:
        n = int(input())
        print(factsize(n))
    except EOFError: break
