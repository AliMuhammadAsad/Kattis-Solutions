seq = input()
d = {"T":0, "C":0, "G":0}
for i in seq:
    d[i] += 1
least = min(d, key = d.get)
pts = (d["T"]**2) + (d["C"]**2) + (d["G"]**2) + (d[least]*7)
print(pts)