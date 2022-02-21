-- 문제
-- 동물 보호소에 들어온 동물 중, 
-- 이름이 없는 채로 들어온 동물의 ID를 조회하는 SQL 문을 작성해주세요.
-- 단, ID는 오름차순 정렬되어야 합니다.

SELECT 
	animal_id -- 결과로 출력할 테이블의 컬럼 명
from 
	animal_ins
where 
	name is null -- 조건은 이름이 null인 경우
order by 
	animal_id; -- 오름차순 즉, 알파벳순으로 정렬
