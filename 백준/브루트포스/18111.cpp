
#include <iostream>
using namespace std;

int board[501][501];

int main()
{
    int n, m, b;
    int mintime = 1e9;
    int maxheight = -1;
    cin >> n >> m >> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m;  j++)
            cin >> board[i][j];
            
    for (int height = 0; height <= 256; height++){
        int inven = 0;
        int remove = 0;
        for (int i=0; i < n; i++){
            for (int j=0; j < m; j++){
                int cur_height = board[i][j] - height;
                if (cur_height < 0) inven -= cur_height;
                else remove += cur_height;
            }
        }
        if (remove + b >= inven){
            int ttime = 2 * remove + inven;
            if (mintime >= ttime){
                mintime = ttime;
                maxheight = height;
            }
        }
        
    }
    cout << mintime << " " << maxheight;
}
