if __name__ == "__main__":
    n = int(input())
    total = 0; edge = 0; layer = 0
    while True:
        if edge == 0: edge += 1
        else: edge += 2
        total += edge**2
        if total <= n:
            layer += 1
        else:
            print(layer); break