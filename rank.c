
// 순위 구하기 알고리즘

// 시험 점수들을 값이 큰 순서대로 등수를 매기려고 한다. 
// 예를 들면, 5명의 시험 점수가 82, 75, 98, 63, 40이라면 
// 각 점수의 등수는 2등, 3등, 1등, 4등, 5등이 된다. 시험 점수들의 갯수는 N(> 0)이다. 
// 시험 점수들은 크기가 N인 Score라는 배열에 저장되어 있다. 
// 각 점수의 등수는 크기가 N인 Rank라는 배열에 저장해야 한다. 
// 등수를 매기는 알고리즘을 작성하라. 정렬을 사용하지 말아라. 
// 작성한 알고리즘의 시간복잡도를 점근적 Theta 표기로 나타내라.

/*
Algorithm score_rank
input : score_array[N] 							// 학생 N 명의 점수가 저장된 배열
output : rank_array[N] 							// 학생 N 명에 대한 등수가 저장된 배열

for i=0 in score_array[N] do
	rank_array[i] = 1 							// 등수를 1로 초기화
	for j=0 in score_array[N] do
		if score_array[i] < score_array[j] then // 자신의 점수보다 더 높은 점수가 있으면
			rank_array[i]++						// 자신의 순위 값 증가.
		else
			continue 							// 자신의 점수보다 낮으면 건너뜀.

print rank_array[N] 							// 순위를 출력한다.
	
*/

#include<stdio.h>

int main(void) {
    
    // 점수를 저장하는 배열
	int score[5] = { 82, 75, 98, 63, 40};

    // 등수를 저장하는 배열
	int rank[5] = {1}; //최초 실행 시 모든 순위 배열의 값을 1으로 초기화.

	for (int i = 0; i < 5; i++) {
		rank[i] = 1;
		for (int j = 0; j < 5; j++) {
			if (score[i] < score[j]) { //자신보다 큰 점수가 존재하면 해당 순위 값 증가.
				rank[i]++;
			} else {
				continue;
			}
		}
	}

	for (int i = 0; i < 5; i++) { //출력.
		printf("%d번 학생의 점수 : %3d, 등수 : %2d\n", i+1, score[i], rank[i]);
	}
	return 0;

}


