def solution(s):
    answer = ''
    res = []
    
    for c in s:
        res.append(ord(c))
        
    res.sort(reverse=True)
    
    for i in res:
        answer += chr(i)
    
    return answer