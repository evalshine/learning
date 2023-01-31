a, b = {}, {}

f, x, c, d = (input() for _ in range(4))

for i in range(len(f)):
    a[f[i]] = x[i]
    b[x[i]] = f[i]

result1 = ''
for el in c:
    result1 += a[el]

result2 = ''
for el in d:
    result2 += b[el]

print(result1, result2, sep='\n')