t = int(input())
for i in range(t):
    n = int(input())
    p1 = ""; lst = []
    p1 = input(); n -= 1
    flag = False
    while(n > 0):
        num = input(); lst.append(num); n -= 1
    for num in lst:
        if p1 == num[0:len(p1)]:
            flag = True; print("NO"); break
    if flag == False:
        for i in range(len(lst)):
            for j in range(len(lst)):
                if i == j: continue
                if lst[i] == lst[j][0: len(lst[i])]:
                    flag = True; print("NO"); break
    if flag == False: 
        print("YES")
            
