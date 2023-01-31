a = [int(i) for i in input().split()]
tmp = []
for el in a:
    if el not in tmp and a.count(el) > 1:
        tmp.append(el)
        print(el, end=' ')