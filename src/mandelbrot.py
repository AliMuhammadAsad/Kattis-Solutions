import math

inp_num = 1
while True:
    try:
        x, y, iters = map(float, input().split())
    except EOFError:
        break
    iters = int(iters)
    i = 1
    ogx = x; ogy = y
    while i < iters and (math.sqrt(x**2 + y**2) < 2): #checking if i is less than the iterations required and if mod remains less than 2
        # z_{n+1} = z(n)^2 + C where C is the complex number at the start
        # (x + yi)^2 = x^2 - y^2 + 2xyi
        #              --Real--   --Imaginary--
        x_temp = x
        x = (x**2 - y**2) + ogx #computing the real part 
        y = 2*x_temp*y + ogy #computing the imaginary part
        i += 1
    if math.sqrt(x**2 + y**2) < 2: print(f"Case {inp_num}: IN")
    else: print(f"Case {inp_num}: OUT")
    inp_num += 1

#Runtime 0.05s