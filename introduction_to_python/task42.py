# put your python code here
n = int(input())
v, h = 0, 0
for i in range(n):
    line = input().split()
    op = line[0]
    score = int(line[1])
    if op == 'север':
        v += score
    if op == 'юг':
        v -= score
    if op == 'запад':
        h -= score
    if op == 'восток':
        h += score
print(h, v)
