-- 문제
-- 동물 보호소에 들어온 동물 중 젊은 동물의 아이디와 이름을 조회하는 SQL 문을 작성해주세요

SELECT
	animal_id, name
from 
	animal_ins
where 
	not intake_condition = 'Aged'
order by 
	animal_id;