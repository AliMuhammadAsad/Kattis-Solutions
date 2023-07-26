vol = 7
n = int(input())
for _ in range(n):
    req = input()
    if req == "Skru op!" and vol < 10: vol += 1
    elif req == "Skru ned!" and vol > 0: vol -= 1
print(vol) 