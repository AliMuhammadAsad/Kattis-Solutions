k = int(input())
ts = 0
while k > 0:
    if k > 400:
        k -= 500; ts += 1
    elif k >= 150:
        k -= 200; ts += 1
    else: k -= 100; ts += 1

print(ts)