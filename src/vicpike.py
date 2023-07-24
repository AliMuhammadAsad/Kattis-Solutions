n, t = map(int, input().split())
a, b, c, to = map(int, input().split())
lstTime = [to]
for i in range(1, n):
    lstTime.append((((a * lstTime[i - 1]) + b) % c) + 1)
lstTime.sort()
time, pen, sols = 0, 0, 0
for i in lstTime:
    if time + i > t: break
    else:
        sols += 1; time += i; pen += time

print(sols, pen % 1000000007)   