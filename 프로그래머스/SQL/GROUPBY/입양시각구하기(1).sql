-- 문제
-- 보호소에서는 몇 시에 입양이 가장 활발하게 일어나는지 알아보려 합니다. 
-- 09:00부터 19:59까지, 각 시간대별로 입양이 몇 건이나 발생했는지 조회하는 SQL문을 작성해주세요. 
-- 이때 결과는 시간대 순으로 정렬해야 합니다.

SELECT
	hour(datetime) as hour, count(datetime) as COUNT
from 
	animal_outs
group by -- 추출한 시간들을 그룹화
	hour(datetime)
having -- 09시부터 19시까지
	hour >= 9 and hour <= 19
order by -- 시간순으로 정렬
	hour; 

-- hour(datetime)은 조회 결과 date data에서 시간만 추출하겠다는 의미