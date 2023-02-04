objects = [1, 2, 1, 2, 3,1,2]
result = []
for el in objects:
    if el not in result:
        result.append(el)
print(len(result))