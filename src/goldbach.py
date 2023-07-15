import math

def isPrime(n):
    if n <= 1: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

if __name__ == "__main__":
    n = int(input())
    while(n > 0):
        x = int(input())
        reps = []
        for i in range(2, int(x / 2) + 1):
            j = x - i
            if isPrime(i) and isPrime(j):
                reps.append((i, j))
        
        print(f"{x} has {len(reps)} representation(s)")
        for i in reps:
            print(f"{i[0]}+{i[1]}")
        print()
        n -= 1

# Runtime 0.26s