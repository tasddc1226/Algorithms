-- 문제
-- 가장 최근에 들어온 동물은 언제 들어왔는지 조회하는 SQL 문을 작성해주세요.

SELECT 
	datetime as 시간
from 
	animal_ins
order by 
	datetime desc
limit 1; -- 출력을 상위 1개만 하도록