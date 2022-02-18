class Solution {
    // 백트래킹 조합
    // arr : 조합을 뽑아낼 배열
    // visited : 조합에 뽑혔는지 확인하는 배열
    // start : 배열의 첫 시작 index, 0
    // n : 배열의 길이
    // r : 조합의 길이
    static void comb(String[] arr, boolean[] visited, int start, int n, int r) {
        if (r == 0) {
            print(arr, visited, n);
            return;
        }

        for (int i=start; i < n; i++) {
            visited[i] = true;
            comb(arr, visited, i + 1, n, r - 1);
            visited[i] = false;
        }
    }
    
    public int solution(String numbers) {
        int answer = 0;
        int len = numbers.length();
        String[] sNumArray = numbers.split("");
        boolean[] visited = new boolean[len];
        
        for (int i=1; i <= len; i++) {
            comb(sNumArray, visited, 0, len, i);
        }
        
        
        return answer;
    }
    
    // 배열 출력
    static void print(String[] arr, boolean[] visited, int n) {
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                System.out.print(arr[i] + " ");
            }
        }
        System.out.println();
    }
}