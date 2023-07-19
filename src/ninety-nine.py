if __name__ == "__main__":
    n = 1; print(n)
    while(True):
        n = int(input())
        n += min(3 - n % 3, 2)
        print(n)
        if(n >= 99): break