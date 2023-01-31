
result = {}
cnt = 0
m, p, r = 0, 0, 0

with open('C:\\Users\\kupry\\Downloads\\dataset_3363_4.txt', 'r') as inf:
    for line in inf:
        line = line.strip().split(';')
        name = line[0]
        math, phys, ru = (int(el) for el in line[1:])
        result[name] = (math + phys + ru) / 3
        m += math
        p += phys
        r += ru
        cnt += 1

with open('out.txt', 'w') as ouf:
    for value in result.values():
        ouf.write(f'{value}\n')
    ouf.write(f'{m/cnt} {p/cnt} {r/cnt}')