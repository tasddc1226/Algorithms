

	# date : 2021.10.08
	# problom : 10250
	# title : ACM 호텔

t = int(input())

for i in range(t):
    # 호텔의 총 층수, 호수, 손님이 방문한 순서 입력
    h, w, n = map(int, input().split())
    # 각층의 방번호
    num = n//h + 1
    # 객실의 층
    floor = n % h
    if n % h == 0:  # h의 배수이면,
        num = n//h
        floor = h
    print(f'{floor*100+num}')