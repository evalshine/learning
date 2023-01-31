a = [int(el) for el in input().split()]
if len(a) == 1:
    print(a[0])
else:
    result = [0 for i in range(len(a))]
    result[0], result[-1] = a[-1] + a[1], a[-2] + a[0]
    for i in range(1, len(a) - 1):
        result[i] = a[i - 1] + a[i + 1]
    print(*result)