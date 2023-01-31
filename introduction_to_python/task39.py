n = int(input())
result = {}
for i in range(n):
    line = input().split(';')
    team1, score1, team2, score2 = line[0], int(line[1]), line[2], int(line[3])
    if team1 not in result:
        result[team1] = [0, 0, 0, 0, 0]
    if team2 not in result:
        result[team2] = [0, 0, 0, 0, 0]
    result[team1][0] += 1
    result[team2][0] += 1
    if score1 > score2:
        result[team1][1] += 1
        result[team2][3] += 1
        result[team1][4] += 3
    elif score1 < score2:
        result[team2][1] += 1
        result[team1][3] += 1
        result[team2][4] += 3
    else:
        result[team1][2] += 1
        result[team1][4] += 1
        result[team2][2] += 1
        result[team2][4] += 1

for key, value in result.items():
    print(key, ' '.join(map(str, value)), sep=':')