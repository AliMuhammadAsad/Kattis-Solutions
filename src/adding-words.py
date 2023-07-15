words = {}

def get_key(val):
    values = {v: k for k, v in words.items()}
    if val in values: return values[val]
    else: return "unknown"

def calc(com):
    lst = []
    for x in com[:-1]:
        if x in ['+', '-']:
            lst.append(x)
        elif x in words:
            lst.append(words[x])
        else:
            return " ".join(com) + " unknown"
    
    ans = str(eval(' '.join(lst)))
    res = get_key(ans)
    return " ".join(com) + " " + res

while True:
    try:
        com = input().split()
        if com[0] == 'def':
            words[com[1]] = com[2]
        elif com[0] == 'calc':
            c = com[1:]
            print(calc(c))
        elif com[0] == 'clear':
            words = {}
    except EOFError:
        break