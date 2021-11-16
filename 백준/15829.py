# date : 2021.09.16
# problom : 15829
# title : Hashing
# [ 성공 ]

from sys import stdin
r = 31
M = 1234567891
sum = 0

L = int(stdin.readline())
string = list(input())
arr = []

for idx, c in enumerate(string):
    sum += (ord(c)-96)*(r**idx)

print(sum % M)
