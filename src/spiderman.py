if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        m = int(input())
        seq = list(map(int, input().split()))
        lev = 0; s = "U"
        lev += seq[0]
        for i in range(1, len(seq)):
            if seq[i] > lev: lev += seq[i]; s += "U"
            else: lev -= seq[i]; s += "D"
        if lev == 0: print(s)
        else: print("IMPOSSIBLE")
