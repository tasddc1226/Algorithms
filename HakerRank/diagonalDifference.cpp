/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int leftToRight = 0;
    int rightToLeft = 0;
    int result = 0;
    
    for (int i=0; i < arr.size(); i++){
        for (int j=0; j < arr.size(); j++){
            if (i == j) {
                leftToRight += arr[i][j];
            }
        }
    }
    
    
    for (int i=0, j=arr.size()-1; i < arr.size(); i++, j--){
        rightToLeft += arr[i][j];
        
    }
    
    result = abs(leftToRight - rightToLeft);
    
    return result;
}