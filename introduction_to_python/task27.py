def y(x):
    if x <= -2:
        return 1 - (x + 2) ** 2
    elif x > 2:
        return (x - 2) ** 2 + 1
    elif -2 < x <= 2:
        return -(x/2)