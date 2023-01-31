a = list(map(int, input().split()))
el = int(input())
is_find = False
for i in range(len(a)):
    if a[i] == el:
        print(i, end=' ')
        is_find = True
if not is_find:
    print('Отсутствует')