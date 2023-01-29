x, h, m = (int(input()) for _ in range(3))
result = x + h * 60 + m
print(result // 60, result % 60, sep = '\n')