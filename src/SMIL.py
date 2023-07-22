line = input()
for i in range(len(line)):
    if line[i] == ":":
        if i < len(line) - 1  and line[i + 1] == ")": print(i)
        elif  i < len(line) - 2 and line[i + 1] == "-"  and line[i + 2] == ")": print(i)
    elif line[i] == ";":
        if i < len(line) - 1 and line[i + 1] == ")": print(i)
        elif i < len(line) - 2 and line[i + 1] == "-" and line[i + 2] == ")": print(i)