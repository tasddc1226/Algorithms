-- 문제
-- 동물 보호소에 들어온 동물 중 아픈 동물의 아이디와 이름을 조회하는 SQL 문을 작성해주세요.

SELECT 
	animal_id, name
from 
	animal_ins
where 
	intake_condition = 'sick'
order by 
	animal_id;