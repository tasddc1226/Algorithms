# [시간 초과] : 모든 조합 만들어서 가장 큰수 만들기
from itertools import combinations

def try1(number, k):
    answer = list(combinations(list(number), len(number) - k))
    return ''.join(sorted(answer, reverse=True)[0]) # 내림차순으로 정렬하고 가장 앞에있는 값 return

# [통과] stack을 이용한 풀이

def solution(number, k):
    answer = []
    
    for num in number:
        # stack이 비어있다면
        if not answer: 
            answer.append(num)
            continue
        # 제거할 수가 아직 남아있다면
        if k > 0: 
            # stack의 마지막 값이 num보다 작으면
            while answer[-1] < num: 
                # 마지막 값을 빼고
                answer.pop() 
                # 제거했으므로 k값을 감소
                k -= 1       
                # stack이 비었거나 제거할 수가 없으면 탈출
                if not answer or k <= 0: 
                    break
        # 제거할 수가 없으면 남은 수를 붙이기
        answer.append(num)
    
    # k > 0 이상이면 스택에서 k개 삭제 후 join해서 결과 값 반환
    answer = answer[:-k] if k > 0 else answer    
    return ''.join(answer)

print(try1("1924", 2))
print(solution("1924", 2))

print(try1("1231234", 3))
print(solution("1231234", 3))

print(try1("4177252841", 3))
print(solution("4177252841", 3))

print(try1("999", 2))
print(solution("999", 2))