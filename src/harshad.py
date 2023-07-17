def harshad(s):
    digs = 0
    lst = []
    for i in n:
        digs += int(i)
    if int(s) % digs == 0:
        return True
    return False

if __name__ == "__main__":
    n = input()
    while True:
        if harshad(n) == True:
            print(n); break
        else: 
            n = str(int(n) + 1)