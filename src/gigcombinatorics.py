n = int(input())
lst = list(map(int, input().split()))
a, b, c = [0], [0], [0]

for i in range(n):
    j = i + 1
    if(lst[i] == 1):
        a.append(a[j - 1] + 1); b.append(b[j - 1]); c.append(c[j - 1])
    elif(lst[i] == 2):
        a.append(a[j - 1]); b.append(2 * b[j - 1] + a[j - 1]); c.append(c[j - 1])
    elif(lst[i] == 3):
        a.append(a[j - 1]); b.append(b[j - 1]); c.append(c[j - 1] + b[j - 1])
    if a[j] > (10**9 + 7): a[j] = a[j] % (10**9 + 7)
    if b[j] > (10**9 + 7): b[j] = b[j] % (10**9 + 7)
    if c[j] > (10**9 + 7): c[j] = c[j] % (10**9 + 7)

print(c[n])
