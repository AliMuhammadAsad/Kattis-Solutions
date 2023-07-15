l = int(input()); d = int(input()); x = int(input())

for i in range(l, d + 1):
    ds = sum(int(d) for d in str(i))
    if ds == x:
        print(i); break
    
for i in range(d, l - 1, -1):
    dsm = sum(int(d) for d in str(i))
    if dsm == x:
        print(i); break

# Runtime 0.06s