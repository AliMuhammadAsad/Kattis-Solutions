def area(n, arr):
    are = 0
    for i in range(n):
        j = (i + 1) % n
        are += (arr[i][0] * arr[j][1]) - (arr[j][0] * arr[i][1])
    return are / 2

if __name__ == "__main__":
    n = int(input())
    while(n != 0):
        pts = []
        for i in range(n):
            pt = list(map(int, input().split()))
            pts.append(pt)
        
        a = area(n, pts)
        if a < 0: print(f"CW {abs(a)}")
        else: print(f"CCW {abs(a)}")
        n = int(input())
        