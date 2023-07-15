n = int(input())
line = input()
line = line.split()
negs = 0
for i in range(len(line)):
    line[i] = int(line[i])
    if(line[i] < 0): negs += 1
print(negs)

# Runtime 0.05s