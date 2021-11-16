/*
	date : 2021.08.27
	problom : 1260
	title : DFS와 BFS
	discribe : DFS와 BFS의 기본을 구현해보자
*/
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <queue>
#include <vector>
using namespace std;
 
int n, m, start;
int visit[10010];
vector<vector<int>> vec;

void printGraph(){
    for(int i = 1; i < vec.size(); i++) {
        cout << "v[" << i << "]" << " : ";
        for (int j = 0; j < vec[i].size(); j++) {
            cout << "vec[" << i << "][" << j << "]: "  << vec[i][j] << " ";
        }
        cout << endl;
    }
}

void DFS(int z)
{
	visit[z] = 1;
	cout << z << " ";
	for (int i = 0; i < vec[z].size(); ++i) {
		int x = vec[z][i];
		if (!visit[x]) {
			DFS(x);
		}
	}
}
 
void BFS(int z)
{
	int l = z;
	queue<int> q;
	visit[l] = 1;
	q.push(l);
 
	while (!q.empty()) {
		l = q.front();
		q.pop();
		cout << l << " ";
 
		for (int i = 0; i < vec[l].size(); ++i) {
			int x = vec[l][i];
			if (visit[x] == 0) {
				visit[x] = 1;
				q.push(x);
			}
		}
	}
}
 
int main(int argc, char *argv[])
{
    // input 정점 개수, 간선 개수, start 정점    
	cin >> n >> m >> start;
	
	for (int i = 0; i <= n; ++i) {
		vector<int> e;
		vec.push_back(e);
	}

    // 간선 개수만큼 간선 입력
	for (int i = 0; i < m; ++i) {
		int x, y;
 
		cin >> x >> y;
 
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	// sort
	for (int i = 0; i <= n; ++i) {
		sort(vec[i].begin(), vec[i].end());
	}

    // print
    // printGraph();
 
	memset(visit, 0, sizeof(visit));
	DFS(start);
	cout << endl;
 
	memset(visit, 0, sizeof(visit));
	BFS(start);

	return 0;
}

// input output 모습
// 4 5 1
// 1 2
// 1 3
// 1 4
// 2 4
// 3 4
// v[1] : vec[1][0]: 2 vec[1][1]: 3 vec[1][2]: 4 
// v[2] : vec[2][0]: 1 vec[2][1]: 4 
// v[3] : vec[3][0]: 1 vec[3][1]: 4 
// v[4] : vec[4][0]: 1 vec[4][1]: 2 vec[4][2]: 3 
// 1 2 4 3 
// 1 2 3 4  