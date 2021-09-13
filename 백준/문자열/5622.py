
# /*
# 	date : 2021.09.06
# 	problom : 5622
# 	title : 다이얼
#   discribe : 규칙에 따라 문자에 대응하는 수를 출력하자
# */


word = input()
list =['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']

time = 0
for unit in list:
    for i in unit:
        for x in word:
            if i == x:
                time += list.index(unit) +3

print(time)