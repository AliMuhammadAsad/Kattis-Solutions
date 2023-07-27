# if __name__ == "__main__":
#     t = int(input())
#     for _ in range(t):
#         a, b = map(int, input().split())
#         lst = []
#         for i in range(a, b + 1):
#             s = str(i)
#             for j in s: lst.append(int(j))
#         print(sum(lst))

def solve(n): 
    if n<=0: return 0 
    
    if n%10==0: 
        return 10 * solve(n//10) + 45 * (n//10) 
    
    return solve(n-1) + sum(int(x) for x in str(n-1)) 
 
if __name__ == "__main__":
    t = int(input())
    for _ in range(t): 
        a, b = map(int, input().split()) 
        print(solve(b + 1) - solve(a)) 