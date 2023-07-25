import sys
ws = set()
for inp in sys.stdin:
    line = inp.split()
    lst = []
    for word in line:
        if word.lower() in ws:
            lst.append(".")
        else:
            lst.append(word); ws.add(word.lower())
    s = str()
    for i in lst:
        s += i + " "
    print(s)