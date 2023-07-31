nfact = input()
val = 0
for i in nfact:
    val = (val * 10 + int(i)) % (10**9 + 9)

f = 1
i = 1
while True:
    f = (f * i) % (10**9 + 9)
    if f == val:
        print(i); break
    i += 1

