n, t = map(int, input().split())
lst = list(map(int, input().split()))
tasks = 0
for i in lst:
    if i > t: break
    else: t = t - i; tasks += 1
print(tasks)

# Runtime 0.05s