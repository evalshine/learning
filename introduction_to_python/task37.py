import requests

with open('C:\\Users\\kupry\\Downloads\\dataset_3378_2.txt', 'r') as inf:
    url = inf.readline().strip()
    r = requests.get(url)
    print(len(r.text.splitlines()))