sum, sq_sum = 0, 0
while True:
    n = int(input())
    sum += n
    sq_sum += n ** 2
    if sum == 0:
        print(sq_sum)
        break