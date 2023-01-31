fig = input()

if fig == 'треугольник':
    a, b, c = (float(input()) for _ in range(3))
    p = (a + b + c) / 2
    print((p*(p-a)*(p-b)*(p-c))**0.5)
elif fig == 'прямоугольник':
    a, b = float(input()), float(input())
    print(a * b)
elif fig == 'круг':
    r = float(input())
    print(3.14 * r ** 2)