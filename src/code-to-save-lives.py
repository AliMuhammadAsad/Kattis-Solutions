t = int(input())
while(t > 0):
    lst1 = list(map(str, input().split()))
    lst2 = list(map(str, input().split()))
    n1 = n2 = str()
    for i in lst1:
        n1 += i
    n1 = int(n1)
    for i in lst2:
        n2 += i
    n2 = int(n2)
    n3 = n1 + n2
    n3 = str(n3)
    for i in n3:
        print(i, end=" ")
    t -= 1

# Runtime 0.05s