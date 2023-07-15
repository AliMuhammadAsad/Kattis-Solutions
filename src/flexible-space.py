w, p = map(int, input().split())
parts = list(map(int, input().split()))
parts.append(w)
parts.insert(0, 0)
possibs = []
for i in range(len(parts) - 1, -1, -1):
    for j in range(i - 1, -1, -1):
        if(parts[i] - parts[j] not in possibs):
            possibs.append(parts[i] - parts[j])
possibs.sort()
for i in possibs:
    print(i, end=" ")

# Runtime 0.05s