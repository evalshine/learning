# не добавляйте кода вне функции
def update_dictionary(d, key, value):
    if key in d:
        d[key] += [value]
    elif 2*key in d:
        d[2*key] += [value]
    else:
        d[2*key] = [value]

# не добавляйте кода вне функции