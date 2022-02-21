
set @hour := -1; -- 변수 선언, @가 붙으면 프로시저가 종료되어도 유지된다.
-- SQL에서 대입연산은 '='과 혼동을 피하기 위해 '!='를 사용함

SELECT
	(@hour := @hour + 1) as HOUR, -- HOUR는 0부터 시작
    (SELECT COUNT(*) FROM ANIMAL_OUTS WHERE HOUR(DATETIME) = @hour) as COUNT
	-- 쿼리문에서 로컬 변수를 활용
from 
	animal_outs
where
    @hour < 23; -- 23시까지가 될 때까지 반복
    