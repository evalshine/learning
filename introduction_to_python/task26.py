n = int(input())
result = [[0]*n for i in range(n)]

cnt = 1
index = 0

if n == 1:
    print(n)
else:

    while True:
        for up in range(index, n - index):
            result[index][up] = cnt
            cnt += 1
        if cnt == n * n:
            break
        
        for right in range(index + 1, n - index):
            result[right][n-1-index] = cnt
            cnt += 1
        if cnt == n * n:
            break

        for down in range(n - 2 - index, index - 1, -1):
            result[n - 1 - index][down] = cnt
            cnt += 1
        if cnt == n * n:
            break

        for right in range(n - 2 - index, index, - 1):
            result[right][index] = cnt
            cnt += 1
        if cnt == n * n:
            break

        index += 1

    result[len(result) // 2][len(result) // 2 - 1 + n % 2] = cnt

    for i in range(len(result)):
        for j in range(len(result[i])):
            print(result[i][j], end=' ')
        print()