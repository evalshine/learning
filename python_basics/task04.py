def fact(a):
    if a <= 1:
        return 1
    return a * fact(a - 1)

n, k = map(int, input().split())
print(fact(n) // (fact(n - k) * fact(k)))