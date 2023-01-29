a, b, h = (int(input()) for _ in range(3))

if h < a:
    print('Недосып')
elif h > b:
    print('Пересып')
else:
    print('Это нормально')