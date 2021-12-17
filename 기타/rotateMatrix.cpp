
#include <iostream>
#include <string>

using namespace std;

int **mat;
int **temp;

void print(int n, int m, int** mat) {

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < m; j++)	{
			cout << mat[i][j] << "\t";
		}
		cout << "\n";
	}
}

void rotateMat(int row, int col, int ** mat) {
	
	// new temp
	temp = new int*[col];
	for (int i = 0; i < col; i++) {
		temp[i] = new int[row];
	}

	// temp 시계방향 90도 회전
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp[i][j] = mat[col-j-1][i];
		}
	}
	
	/*cout << "----- Print temp -----\n";
	print(row, col, temp);*/

	// copy temp -> mat
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			mat[i][j] = temp[i][j];
		}
	}

	// delete temp
	for (int i = 0; i < row; i++)
		delete[] temp[i];
	delete[] temp;

}

int main() {
	int N, M;

	cin >> N >> M;
	
	mat = new int*[M];
	for (int i = 0; i < M; i++) {
		mat[i] = new int[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			mat[i][j] = i*M + j;
		}
	}

	cout << "----- Init Print mat -----\n";
	print(N, M, mat);

	rotateMat(N, M, mat);

	cout << "----- After 90 degree rotate -----\n";
	print(N, M, mat);

	rotateMat(N, M, mat);

	cout << "----- After 180 degree rotate -----\n";
	print(N, M, mat);

	system("pause");
}