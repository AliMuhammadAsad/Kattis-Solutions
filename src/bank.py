n, t = map(int, input().split())
lst = [[] for i in range(47)]
idxs = set()
for i in range(n):
    ci, ti = map(int, input().split())
    lst[ti].append(ci)
    idxs.add(ti)

amt = 0
for i in idxs:
    if t == 0: break
    amt += max(lst[i])
    t -= 1

print(amt)