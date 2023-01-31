n = int(input())
cache = {}
for i in range(n):
    x = int(input())
    if x in cache:
        print(cache[x])
    else:
        fx = f(x)
        cache[x] = fx
        print(fx)