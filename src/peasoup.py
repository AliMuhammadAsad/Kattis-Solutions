if __name__ == "__main__":
    n = int(input())
    flag = False
    while(n > 0):
        k = int(input())
        resname = input()
        menu = [input() for i in range(k)]
        if "pea soup" in menu and "pancakes" in menu:
            flag = True
            print(resname); break
        n -= 1
    if flag == False: print("Anywhere is fine I guess")