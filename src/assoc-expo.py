a, b, c = map(int, input().split())

# if((a**(b**c)) != (a**b)**c): print("Oh look, a squirrel!")
# else: print("What an excellent example!")

def power(base, exp, mod):
    r = 1
    while(exp > 0):
        if(exp % 2 == 1):
            r = (r * base) % mod
        base = (base * base) % mod
        exp //= 2
    return r

mod = 1000000000000000000000000000000000000000000000000000000000000000000

if power(a, power(b, c, mod), mod) == power(power(a, b, mod), c, mod): print("What an excellent example!")
else: print("Oh look, a squirrel!")

## a ^ (b ^ c) == (a ^ b)^c