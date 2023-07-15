import math

def ss(n):
    sqrtgtn = math.ceil(math.sqrt(n))
    return sqrtgtn ** 2

def rotate_90(matrix):
    res = []
    for i in range(len(matrix[0])):
        lst = []
        for j in range(len(matrix)):
            lst.append(matrix[j][i])
        lst.reverse()
        res.append(lst)
    return res

n = int(input())

while(n > 0):
    s = input(); m = ss(len(s))
    r = c = int(math.sqrt(m))
    mat = [["*" for i in range(c)] for j in range(r)]
    idx = 0
    for i in range(r):
        for j in range(c):
            if idx < len(s):
                mat[i][j] = s[idx]; idx += 1
    rot_mat = rotate_90(mat)
    fs = ""
    for i in range(r):
        for j in range(c):
            if(rot_mat[i][j] == "*"):
                continue
            else:
                fs += rot_mat[i][j]
    print(fs)
    n -= 1

# 0.15s