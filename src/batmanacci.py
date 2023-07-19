n, k = map(int, input().split())
fibo = [0, 1, 1]
for i in range(n+1):
    fibo.append(fibo[-1] + fibo[-2])

while n > 2:
    if k > fibo[n-2]:
        k -= fibo[n-2]; n -= 1
    else:
        n -= 2

print("N" if n == 1 else "A")

#Suppose you concatenate 'abcde' and 'fghi' to get 'abcdefghi'. The first five letters of 'abcdefghi' are the first five letters of 'abcde'. Letters 6 to 9 are letters 1 to 4 of 'fghi'. So if i want to know the kth letter of 'abcde' and if k > 5, then I can take the (k - 5)th letter of 'fghi'. 
#For eg, the 5th letter in ANANAANA = ANA + NAANA is the second letter in NAANA = NA + ANA which is the second letter in NA = N + A is the first letter in A. So we break it up like this instead of iterating over longer numbers.