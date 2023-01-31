n = int(input())
known = []
for i in range(n):
    word = input().strip().lower()
    if word not in known:
        known.append(word)
result = []
n = int(input())
for i in range(n):
    line = input().strip().lower().split()
    for el in line:
        if el not in known and el not in result:
            result.append(el)

print('\n'.join(result))