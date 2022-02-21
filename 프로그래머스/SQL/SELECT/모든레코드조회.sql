-- 문제
-- 동물 보호소에 들어온 모든 동물의 정보를 ANIMAL_ID순으로 조회하는 SQL문을 작성해주세요.

SELECT * 
from
	animal_ins
order by
	animal_id;