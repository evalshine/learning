s = input()
result = ''
cnt = 1
for i in range(1, len(s)):
    if s[i] != s[i-1]:
        result += s[i-1] + str(cnt)
        cnt = 1
    else:
        cnt += 1
result += s[-1] + str(cnt)
print(result)