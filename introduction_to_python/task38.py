import requests
url = ''
with open('in.txt', 'r') as inf:
    url = inf.readline().strip()
    r = requests.get(url)
    url = r.text

while True:
    with open('in.txt', 'r') as inf:
        url = 'https://stepic.org/media/attachments/course67/3.6.3/' + url
        r = requests.get(url)
        if r.text.startswith('We'):
            with open('out.txt', 'w') as ouf:
                ouf.write(r.text)
            break
        else:
            url = r.text