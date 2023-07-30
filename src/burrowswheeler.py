while True:
    try:
        string = input()
        perms = [string]
        for i in range(len(string) - 1):
            string += string[0]; string = string[1:]
            perms.append(string)
        perms.sort()
        encoded = str()
        for p in perms:
            encoded += p[-1]
        print(encoded)
    except EOFError:
        break