words = []
uniq_words = set()

with open('C:\\Users\\kupry\\Downloads\\dataset_3363_3.txt', 'r') as inf:
    for line in inf:
        line = line.strip().lower().split()
        words += line
        uniq_words.update(words)
    
result = ''
max = 0
for el in uniq_words:
    if max == 0 or words.count(el) >= max:
        if words.count(el) == max:
            if el < result:
                result = el
        else:
            result = el
        max = words.count(el)


print(result, max)