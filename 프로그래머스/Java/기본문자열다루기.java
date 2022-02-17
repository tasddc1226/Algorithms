class Solution {
    public boolean solution(String s) {
		// 정규식 사용
        final String REGEX = "[0-9]+";
        
        if (s.length() != 4 && s.length() != 6) {
            return false;
        }
        // String -> String[]
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
				int x = Integer.parseInt(s); // 여기서 예외가 발생하면 catch문으로 넘어가게 됨.
				return true;
			} catch(NumberFormatException e){ // 문자열 s를 숫자로 바꾸는데 예외가 발생하면 false return
				return false;
			}
		}
		else return false;
	}
}