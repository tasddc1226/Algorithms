import java.util.ArrayList;
import java.util.Iterator;

class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        ArrayList<Integer> yacksu = new ArrayList<Integer>();
        
        int sum = brown + yellow;
        
        // get 약수 of sum
        for (int i=sum; i >= 1; i--) {
            if (sum % i == 0)
                yacksu.add(i);
        }
        
        // [a, b] 순서쌍 짓기
        int size = yacksu.size();
        int cond = size / 2;
        if (size % 2 != 0) {
            cond = cond + 1;
        }
        for (int i=0; i < cond; i++) {
            int width = yacksu.get(i);
            int hight = yacksu.get((size-1)-i);
            
            if (brown == (width*2) + (hight*2) - 4) {
                answer[0] = width;
                answer[1] = hight;
                break;
            }
        }
        
        // Iterator로 ArrayList 요소 순회하기
        // Iterator it = yacksu.iterator();
        // while(it.hasNext()) {
        //     int x = (Integer) it.next();
        //     System.out.println(x);
        // }

        return answer;
    }
}