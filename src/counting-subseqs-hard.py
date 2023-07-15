def count_sub(lst):
    count = 0
    for i in range(len(lst)):
        curr_sum = 0
        curr_sum += lst[i]
        if curr_sum == 47: count += 1
        else:
            for j in range(i + 1, len(lst)):
                curr_sum += lst[j]
                if curr_sum == 47: count += 1; break
                else: continue
    return count

if __name__ == "__main__":
    t = int(input())
    while(t > 0):
        bl = input()
        n = int(input())
        lst = list(map(int, input().split()))
        print(count_sub(lst))
        t -= 1

# Time limit exceeded of 2.00s