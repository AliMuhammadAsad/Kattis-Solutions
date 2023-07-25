def parts(n, lst):
    parts = 0
    premax = [0] * n; sufmin = [0] * n
    premax[0] = lst[0]; sufmin[n-1] = lst[n-1]
    for i in range(1, n): 
        premax[i] = max(premax[i - 1], lst[i])
    for i in range(n-2, -1, -1):
        sufmin[i] = min(sufmin[i + 1], lst[i])

    if lst[0] < sufmin[1]: parts += 1
    if lst[n - 1] > premax[n - 2]: parts += 1
    for i in range(1, n - 1):
        if lst[i] > premax[i - 1] and lst[i] < sufmin[i + 1]: parts += 1
    
    return parts

if __name__ == "__main__":
    n = int(input())
    lst = list(map(int, input().split()))
    print(parts(n, lst))