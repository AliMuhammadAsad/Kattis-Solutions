n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))

for i in range(n-1, -1, -1):
    print(lst[i])