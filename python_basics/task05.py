def main():
    import sys
    right_out = sys.stdout
    
    with open('in.txt', 'r') as inf, open('out.txt', 'w') as ouf:
        sys.stdin, sys.stdout = inf, ouf    
        def task():
            result = {'global' : [None]}
            for _ in range(int(input())):
                operation, namespace, var_or_nsp = input().split()
                if operation == 'create':
                    result[namespace] = [var_or_nsp]
                elif operation == 'add':
                    result[namespace].append(var_or_nsp)
                elif operation == 'get':
                    while True:
                        if var_or_nsp in result[namespace]:
                            print(namespace)
                            break
                        namespace = result[namespace][0]
                        if namespace is None:
                            print(None)
                            break
        task()
    sys.stdout = right_out

def compare():
    with open('out.txt', 'r') as inf1, open('answer.txt', 'r') as inf2:
        result = True
        while True:
            line1 = inf1.readline().strip()
            line2 = inf2.readline().strip()
            if not line1 and not line2: break
            print(f'\ncomparing [{line1}] == [{line2}]: {line1 == line2}')
            if line1 != line2:
                result = False
                break
        print(f'\n      Result is: {result}')

if __name__ == '__main__':
    main()
    compare()