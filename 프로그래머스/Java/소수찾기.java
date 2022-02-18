import java.util.ArrayList;
import java.util.HashSet;

class Solution {
    HashSet<Integer> hs = new HashSet<Integer>();
    //ArrayList<Integer> result = new ArrayList<Integer>(); 
    
    public int solution(String numbers) {
        
        String[] sNum = numbers.split("");      // "011" -> ["0", "1", "1"]
        int len = numbers.length();             // get length of input numbers
        boolean[] visited = new boolean[len];   // make visited boolean array
        String[] output = new String[len];      // make output string array
        
        // 뽑을 개수가 1부터 len까지 반복
        for (int i=1; i <= len; i++){
            //System.out.println("pick" + i);
            perm(sNum, output, visited, 0, len, i); // r = i, pick i
        }
        return hs.size();
        //return result.size();
    }
    
	// implement permutation algorithm using DFS
    public void perm(String[] arr, String[] output, boolean[] visited, int depth, int n, int r) {
        if (depth == r){
            print(output, r);
            return;
        }
        
        for (int i = 0; i < n; i++) {
            if (visited[i] != true) {
                // if not visited
                visited[i] = true;
                output[depth] = arr[i];
                perm(arr, output, visited, depth + 1, n, r);
                visited[i] = false;
            }
        }
    }
    
    
    public void print(String[] arr, int n) {
        String num = "";
        for (int i = 0; i < n; i++) {
            // System.out.print(arr[i] + " ");
            num += arr[i];
        }
        // System.out.println(num);
        int x = Integer.parseInt(num);
        // if (!result.contains(x) && isPrime(x)) {
        //     result.add(x);
        // }
		// using HashSet
		if (isPrime(x))
			hs.add(x); // 알아서 중복이 들어가지 않는다
    }
    
    static boolean isPrime(int x) {
        if (x < 2) return false;
        
        for (int i=2; i <= Math.sqrt(x); i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
    
}