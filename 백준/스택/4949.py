
# date : 2021.11.25
# problom : 4949
# title : 균형 잡힌 세상
# discribe : 입력한 문자열에서 소괄호와 대괄호의 짝이 맞는지 아닌지 판별해보자

while 1:
    string = input()
    if string == '.':
        break
    
    stack = []
    flag = True
    
    for c in string:
        if c == '(' or c == '[':
            stack.append(c)
        elif c == ')':
            if not stack or stack[-1] == '[':
                flag = False
                break
            elif stack[-1] == '(':
                stack.pop()
        elif c == ']':
            if not stack or stack[-1] == '(':
                flag = False
                break
            elif stack[-1] == '[':
                stack.pop()
    
    if flag == True and not stack:
        print('yes')
    else:
        print('no')
        

    

        