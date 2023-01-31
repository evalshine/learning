a = []

while True:
    line = input()
    if line == 'end':
        break
    a.append(list(map(int, line.split())))

b = [[0]*len(a[i]) for i in range(len(a))]

for i in range(len(a)):
    for j in range(len(a[i])):
        left, right, up, down = 0, 0, 0, 0
        
        if j == 0:
            left = a[i][-1]
        else:
            left = a[i][j-1]
        
        if j == len(a[i]) - 1:
            right = a[i][0]
        else:
            right = a[i][j+1]

        if i == 0:
            up = a[len(a)-1][j]
        else:
            up = a[i-1][j]

        if i == len(a) - 1:
            down = a[0][j]
        else:
            down = a[i+1][j]
        
        b[i][j] = up + down + right + left

for i in range(len(a)):
    for j in range(len(a[i])):
        print(b[i][j], end=' ')
    print()