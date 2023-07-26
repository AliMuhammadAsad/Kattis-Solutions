# def fact(n):
#     if n == 0 or n == 1: return 1
#     res = 1
#     for i in range(1, n + 1):
#         res *= i
#     return res

# if __name__ == "__main__":
#     n = int(input())
#     val = str(fact(n))
#     while val[-1] == '0':
#         val = val[:-1]
#     if len(val) <= 3: print(int(val))
#     else: print(int(val[-3:]))

# def factorial_last_three_digits(n):
#     factorial = 1
#     trailing_zeroes = 0

#     for i in range(1, n + 1):
#         factorial *= i
#         while factorial % 10 == 0:
#             factorial //= 10
#             trailing_zeroes += 1

#         if trailing_zeroes >= 3:
#             factorial %= 1000

#     return factorial % 1000

# if __name__ == "__main__":
#     n = int(input())
#     print(factorial_last_three_digits(n))
