words = input().lower().split()
uniq_words = set(words)

for el in uniq_words:
    print(el, words.count(el))