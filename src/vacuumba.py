import math

n = int(input())
for _ in range(n):
    m = int(input())
    x = 0; y = 0; angle = 0
    for i in range(m):
        deg, dis = map(float, input().split())
        angle += deg
        x += dis * math.sin(-angle * math.pi / 180.0)
        y += dis * math.cos(-angle * math.pi / 180.0)
    print("{:.7} {:.7}".format(x, y))