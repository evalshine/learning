with open('in.txt', 'r') as inf:
    data = inf.readline().strip()
    ch = data[0]
    num = ''
    result = ''
    for i in range(1, len(data)):
        if 'a' <= data[i] <= 'z' or 'A' <= data[i] <= 'Z':
            result += ch * int(num)
            ch = data[i]
            num = ''
        else:
            num += data[i]
    result += ch * int(num)

with open('out.txt', 'w') as ouf:
    ouf.write(result)