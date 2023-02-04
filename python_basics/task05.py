result = {'global' : [None]}
results = []

def find_nsp(find_name, current_result=result, is_find=False):
    if find_name in current_result:
        return current_result
    for val in list(current_result.values())[0][1:]:
        if type(val) is dict:
            ret = find_nsp(find_name, val)
            if ret is not None:
                return ret

for i in range(int(input())):

    op, ns, var = input().split()
    if op == 'create':
        find_nsp(var)[var].append({ns:[var]})
    elif op == 'add':
        find_nsp(ns)[ns].append(var)
    elif op == 'get':
        namespace = find_nsp(ns)
        is_found = False
        while True:
            name = list(namespace.keys())[0]
            values = list(namespace.values())[0]
            for el in values[1:]:
                if el == var:
                    print(name)
                    is_found = True
                    break
            if is_found:
                break
            namespace = find_nsp(values[0])
            if namespace is None:
                print(None)
                break
    