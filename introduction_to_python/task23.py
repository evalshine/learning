n = int(input())
i, cnt = 1, 0
flag = True
while flag:
    for k in range(i):
        print(i, end=' ')
        cnt += 1
        if cnt == n:
            flag = False
            break
    i += 1
    