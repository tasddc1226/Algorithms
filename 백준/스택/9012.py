
from sys import stdin
from collections import deque
T = int(stdin.readline())

for _ in range(T):
    string = str(stdin.readline())
    sum = 0
    # print(len(string))
    # if (len(string) % 2 != 0):
    #     print("NO")
    # elif (string[0] == ')'):
    #     print("NO")
    # elif (string.count(')') != string.count('(')):
    #     print("NO")
    # else:
    for c in string:
        if c == '(':
            sum += 1
        elif c == ')':
            sum -= 1
        if sum < 0:
            print("NO")
            break


    if (sum > 0):
        print("NO")
    elif (sum == 0):
        print("YES")

        