a, b, c = (float(input()) for _ in range(3))
p = (a+b+c)/2
print((p*(p-a)*(p-b)*(p-c))**0.5)