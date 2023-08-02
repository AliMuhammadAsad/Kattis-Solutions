d = {}
while True:
    line = input()
    if line == "": 
        break
    w, flw = line.split()
    d[flw] = w

while True:
    try:
        word = input()
        if word not in d: print("eh")
        else : print(d[word])
    except EOFError:
        break