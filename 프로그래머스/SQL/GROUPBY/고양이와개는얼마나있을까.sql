-- 문제
-- 동물 보호소에 들어온 동물 중 고양이와 개가 각각 몇 마리인지 조회하는 
-- SQL문을 작성해주세요. 이때 고양이를 개보다 먼저 조회해주세요.

SELECT
    animal_type, count(animal_type)
from
    animal_ins
group by
    animal_type -- 동물의 type 별로 group 짓기
order by
    animal_type; -- Cat -> Dog 순서이므로 알파벳순으로 정렬