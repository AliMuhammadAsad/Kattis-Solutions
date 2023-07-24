n = int(input())
days = list(map(int, input().split()))
days.sort(reverse=True)

for i in range(n):
    days[i] += i + 2

print(max(days))