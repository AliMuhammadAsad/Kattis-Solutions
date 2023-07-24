if __name__ == "__main__":
    t = int(input())
    for _ in range(1, t + 1):
        n = int(input())
        v1 = list(map(int, input().split()))
        v2 = list(map(int, input().split()))
        v1.sort(); v2.sort()
        v2 = v2[::-1]
        prod = 0
        for i in range(n):
            prod += v1[i] * v2[i]
        print(f"Case #{_}: {prod}")