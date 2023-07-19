def prob(n, t):
    mp = 2 ** n
    prob_all = (1 - t) ** n
    return mp * prob_all

if __name__ == "__main__":
    while True:
        n, t = input().split(); n = int(n); t = float(t) 
        if n == 0 and t == 0:
            break
        print(max(prob(i, t) for i in range(n)))