def main():
    import sys
    right_out = sys.stdout

    with open('in.txt', 'r') as inf, open('out.txt', 'w') as ouf:
        sys.stdin = inf
        sys.stdout = ouf

        #main algorithm
        def task():
            result = {}

            def find_subcl(subcl, current):
                if subcl == current:
                    return True
                if current not in result: return
                if subcl in result[current]:
                    return True
                for el in result[current]:
                    if find_subcl(subcl, el):
                        return True

            for _ in range(int(input())):
                line = input().split(' : ')
                if len(line) == 1:
                    if line[0] not in result:
                        result[line[0]] = []
                else:
                    subcl = line[0]
                    for cl in line[1].split():
                        if cl not in result:
                            result[cl] = []
                        result[cl].append(subcl)

            results = [input() for _ in range(int(input()))]
            lst = list(results)
            answers = []
            for i in range(len(results) - 1):
                j = i  + 1
                while j < len(results):
                    if find_subcl(results[j], results[i]):
                        answers.append(results[j])
                        results.pop(j)
                    else:
                        j += 1
            for el in results:
                lst.remove(el)
            for el in lst:
                print(el)

        task()

    sys.stdout = right_out

def compare():
    result = True
    with open('out.txt', 'r') as inf1, open('answer.txt', 'r') as inf2:
        while True:
            line1 = inf1.readline().strip()
            line2 = inf2.readline().strip()
            if not line1 and not line2:
                break
            print(f'\ncomparing [{line1}] == [{line2}]: {line1 == line2}')
            if line1 != line2:
                result = False
        print(f'\n   Result: {result}')


if __name__ == '__main__':
    main()
    compare()