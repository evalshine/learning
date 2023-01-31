a, b = float(input()), float(input())
op = input()

if op == '+':
    print(a + b)
elif op == '-':
    print(a - b)
elif op == '*':
    print(a * b)
elif op == 'pow':
    print(a ** b)
elif b == 0:
    print('Деление на 0!')
elif op == '/':
    print(a / b)
elif op == 'div':
    print(a // b)
elif op == 'mod':
    print(a % b)