result = {}
for i in range(1, 12):
    result[i] = [0, 0]
with open('in.tsv', 'r') as inf:
    for line in inf:
        line = line.split()
        a, b = int(line[0].strip()), int(line[2].strip())
        result[a][0] += b
        result[a][1] += 1

for key, value in result.items():
    if value != [0, 0]:
        print(key, value[0] / value[1])
    else:
        print(key, '-')
