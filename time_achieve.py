#!/usr/bin/python3
from datetime import date

def main():
    now = date.today()
    deadline = date(2023, 5, 1)
    print(deadline - now)

if __name__ == '__main__':
    main()