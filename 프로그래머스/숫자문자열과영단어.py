
from collections import defaultdict

def solution(s):
    answer = []
    num_word = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    tmp = '' # 대조를 위한 빈 문자열
    
    for c in s:
        if c.isdigit():
            answer.append(c)
        else:
            # 영단어로 바뀐 경우
            tmp += c
            # print(tmp)
            if tmp in num_word:
                answer.append(str(num_word.index(tmp)))
                tmp = ''
    return int(''.join(answer))

print(solution("one4seveneight"))
print(solution("2three45sixseven"))