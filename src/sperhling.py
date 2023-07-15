s1 = input(); s2 = input()
i = 0
while i < min(len(s1), len(s2)) and (s1[i] == s2[i]) :
    i += 1

res = len(s1) + len(s2) - 2*i
print(res)
