a, b, c = (int(input()) for _ in range(3))

if b > a:
    b, a = a, b
if c > a:
    c, a = a, c
if c < b:
    b, c = c, b

print(a, b, c, sep='\n')