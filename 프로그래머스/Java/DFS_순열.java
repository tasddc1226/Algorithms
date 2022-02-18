class Solution {
    public int solution(String numbers) {
        int answer = 0;
        
        String[] sNum = numbers.split("");      // "011" -> ["0", "1", "1"]
        int len = numbers.length();             // get numbers length
        boolean[] visited = new boolean[len];   // make visited boolean array
        String[] output = new String[len];      // make output int array
        
        // implement permutation algorithm using DFS
        for (int i=1; i <= len; i++){
            System.out.println("pick" + i);
            perm(sNum, output, visited, 0, len, i); // r = i, pick i
        }
        
        return answer;
    }
    
    static void perm(String[] arr, String[] output, boolean[] visited, int depth, int n, int r) {
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
    
    
    static void print(String[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    
}

// 입력값 > "011"
// 출력   >
// pick1
// 0 
// 1 
// 1 
// pick2
// 0 1 
// 0 1 
// 1 0 
// 1 1 
// 1 0 
// 1 1 
// pick3
// 0 1 1 
// 0 1 1 
// 1 0 1 
// 1 1 0 
// 1 0 1 
// 1 1 0 