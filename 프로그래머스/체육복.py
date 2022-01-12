def solution(n, lost, reserve):
    # 도난 당한 사람, 여분 있는 사람 둘 다 중복해 있는 사람 제거하고 수행
    set_lost = set(lost) - set(reserve)
    set_reserve = set(reserve) - set(lost)
    
    for i in set_reserve:
        if i-1 in set_lost:
            set_lost.remove(i-1)
        elif i+1 in set_lost:
            set_lost.remove(i+1)
    answer = n - len(set_lost)
    return answer