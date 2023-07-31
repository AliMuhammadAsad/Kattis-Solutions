def factors(n):
    lst = []
    for i in range(1, n + 1):
        if n % i == 0:
            lst.append((i, int(n / i)))
    return lst

if __name__ == "__main__":
    n, m = map(int, input().split())
    facts = factors(m)
    c = 0
    for i, j in facts:
        if i <= n and j <= n:
            c += 1
    print(c)