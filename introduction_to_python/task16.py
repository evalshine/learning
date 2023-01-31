a, b = (int(input()) for _ in range(2))
cnt, sum = 0, 0
for i in range(a, b+1):
    if i % 3 == 0:
        sum += i
        cnt += 1
print(sum / cnt)