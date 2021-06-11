#include <stdio.h>
#include <stdlib.h>

#define INF 9999 // 시작 정점을 제외하고 나머지 정점들의 연결비용을 무한대로 초기화
#define MAX 20 // 매트릭스의 최대 행, 열 정의

int G[MAX][MAX]; // 모든 각 정점사이의 비용을 입력하기 위한 매트릭스
int spanning[MAX][MAX]; // 최소신장트리의 집합으로 들어갈 정점사이의 비용을 입력시키기 위한 매트릭스
int n;

int prims();

int main(){
    int i,j,total_cost;
    printf("input V number : "); // 정점의 수 입력
    scanf("%d", &n);

    printf("\n input values each V's : \n"); // 간선간의 모든 매트릭스 값을 입력
    for (i=0; i<n; i++)
        for(j=0; j<n; j++)
        scanf("%d", &G[i][j]);
    
    total_cost = prims(); // 프림 함수를 통해 나온 최소 비용 합을 변수에 저장.
    printf("\n this is spanning tree \n");
    
    for (i=0; i<n; i++){
        printf("\n");
        for (j=0; j<n; j++)
            printf("%d\t", spanning[i][j]);
    }
    printf("\n\n min_cost : %d", total_cost);
    return 0;
}

int prims(){
    int cost[MAX][MAX]; // 간선 간의 비용이 있는 매트릭스
    int u, v, min_distancs, distance[MAX], from[MAX]; // 정점의 시작점 정점의 끝점, 최소거리, 거리의 최대,
    int visited[MAX], no_of_edges, i, min_cost, j;

    // 정점 사이의 비용을 넣을 매트리스와 집합이 되었을때 최소 비용을 저장하는 매트릭스를 만든다.
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(G[i][j] == 0)
                cost[i][i] = INF;
            else
                cost[i][j] = G[i][j];
                spanning[i][j] = 0;
        }
    }

    // 출발했던 정점과 방문했던 정점과 거리를 초기화
    distance[0] = 0;
    visited[0] = 1;

    for (i=1; i<n; i++){
        distance[i] = cost[0][i];
        from[i] = 0;
        visited[i] = 0;
    }

    min_cost = 0; // 최소비용이란 변수는 일단 0으로 지정
    no_of_edges = n-1; // 더해진 노드의 개수는 총 n-1개

    while(no_of_edges > 0){
        // 트리로부터 최소비용거리를 가진 정점들을 찾음
        min_distancs = INF;
        for(i=1; i<n; i++){
            if (visited[i] == 0 && distance[i] < min_distancs){
                v = i;
                min_distancs = distance[i];
            }
        }
        u = from[v];

        // 스패닝 트리에 간선을 삽입
        spanning[u][v] = distance[v];
        spanning[v][u] = distance[v];
        no_of_edges--;
        visited[v] = 1;

        // 최소 비용 거리로 된 정점들을 다시 배열로 정리
        for (i=1; i<n; i++){
            if (visited[i] == 0 && cost[i][v] < distance[i]){
                distance[i] = cost[i][v];
                from[i] = v;
            }
        }
        min_cost = min_cost + cost[u][v];
    }

    return(min_cost);
}