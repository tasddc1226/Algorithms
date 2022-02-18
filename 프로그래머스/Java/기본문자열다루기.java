/*

# Java 길이 구하는 방법

- String에서 길이 구하기
    - str.length();

- [ ] 에서 길이 구하기
    - arr.length; 

# 정규식(특정한 규칙을 가진 문자열의 집합을 표현하는 데 사용하는 형식 언어) 사용

- str.matches(정규식)
    - 문자열(str)이 정의한 정규식에 일치하는지 확인.
    - true를 반환받으면 일치.
    - 만약 일치하지 않는다면 false 반환
    - 참조 : https://zzang9ha.tistory.com/322 

*/
class Solution {
    public boolean solution(String s) {
		// 정규식 사용
        final String REGEX = "[0-9]+";
        
        if (s.length() != 4 && s.length() != 6) {
            return false;
        }
        // String -> String[] 문자열을 문자열 배열로 변경하는 방식
        String[] sArray = s.split("");
        for (int i=0; i < sArray.length; i++) {
			// Element를 정규식과 비교
            if (sArray[i].matches(REGEX)) {
                continue;
            } else {
                return false;
            }
        }
        
        return true;
    }
}

// 다른 사람의 풀이
class Solution1 {
	public boolean solution(String s) {
		if(s.length() == 4 || s.length() == 6){
			try{
				// parseInt 문자열을 받아 10진수 int로 변경함.
				int x = Integer.parseInt(s); // 문자열 s를 숫자로 바꾸는데 숫자로 바꿀 수 없는 문자가 들어있다면 NumberFormatException 예외가 발생 
				return true;
			} catch(NumberFormatException e){ // if the string does not contain a parsable integer. 
				return false;
			}
		}
		else return false;
	}
}