n, w = map(int, input().split())
res = []
res.append(w)
for i in range(1, n+1):
    d, c, u = map(int, input().split())
    res.append(max(res[d] - u, c - u))
    w = min(w, res[i])
print(w)