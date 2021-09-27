from sys import stdin

N = int(stdin.readline())
six = 666
count = 0

while(1):
    if ('666' in str(six)):
        count += 1
        if count == N : print(six) ; break
    six+=1
