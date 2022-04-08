from collections import defaultdict

def solution(id_list, report, k):
    answer = [0] * len(id_list) # 모든 유저의 수만큼 배열 생성

    report = set(report) # report 중복 제거
    # 각 유저가(key) 신고한 다른 유저의 id를 value로 갖고있는 dict
    do_report_id = defaultdict(set) # set으로 type을 지정 (중복 x)
    # 각 유저별 신고당한 횟수를 저장하는 dict
    reported = defaultdict(int) 
    # k번 이상 신고당한 사람들의 id를 저장하는 list
    ban_list = []

    for case in report:
        report_user, reported_user = case.split() # 신고한 유저, 신고당한 유저
        # print(report_user, reported_user)

        reported[reported_user] += 1 # 신고당한 사람의 신고 회수 누적
        # do_report_id['hello'].add("suguri") # hello라는 key값에 suguri라는 value를 넣겠다
        # do_report_id['hello'].add("swim") # hello라는 key값에 swim라는 value를 추가 하겠다
        do_report_id[report_user].add(reported_user) # 누가 누굴 신고했는지 저장

        if (reported[reported_user] == k):
            # 특정 user의 신고당한 횟수가 K번이라면 ban_list에 추가
            ban_list.append(reported_user)
    
    # print(ban_list)

    for ban_id in ban_list:
        for id in range(len(id_list)):
            if ban_id in do_report_id[id_list[id]]:
                answer[id] += 1
    return answer

ids = ["muzi", "frodo", "apeach", "neo"]
reports = ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"]
k = 2

print(solution(ids, reports, k))



