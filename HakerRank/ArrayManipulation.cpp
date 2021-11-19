
/*
 * Complete the 'arrayManipulation' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

long arrayManipulation(int n, vector<vector<int>> queries) {
    long max = 0;
    vector<int> diff(n+1);
    
    // make diff vector
    for (int i=0; i<queries.size(); ++i){
        diff[queries[i][0]] += queries[i][2];
        if ((queries[i][1])+1 <= n) {
            diff[queries[i][1] +1] -= queries[i][2];
        }
    }
    
    long sum = diff[0];
    for (int i=0; i<diff.size(); ++i){
        sum += diff[i];
        if (max < sum){
            max = sum;
        }
    }
    
    
    return max;
}