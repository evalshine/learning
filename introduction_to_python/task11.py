n = input()
left, right = n[:len(n)//2], n[len(n)//2:]
if (sum(map(int, left)) == sum(map(int, right))):
    print('Счастливый')
else:
    print('Обычный')