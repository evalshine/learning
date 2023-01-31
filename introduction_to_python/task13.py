a, b = (int(input()) for _ in range(2))
if b > a:
    a, b = b, a
inc = a
while True:
    if a % b == 0:
        print(a)
        break
    a += inc