import math
def primeCheck(n: int):
    if n <= 1: return "NO"
    if n <= 3: return "YES"
    if n % 2 == 0 or n % 3 == 0:
        return "NO"
    else:
        for i in range(5, int(math.sqrt(n)) + 1, 6):
            if n % i == 0 or n % (i + 2) == 0:
                return "NO"
    return "YES"

n = int(input())
print(primeCheck(n))

# Exceeds time Limit