def cando(c, x, m, f, s):
    cost_hour = x + s / f
    time = m / s
    if time*cost_hour <= c/2: return True
    else: return False

if __name__ == "__main__":
    c, x, m = map(float, input().split())
    res = 0
    for i in range(6):
        s, f = map(float, input().split())
        if cando(c, x, m, f, s) == True: res = s
    
    if res == 0: print("NO")
    else: print(f"YES {int(res)}")