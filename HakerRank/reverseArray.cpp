
/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    vector<int> res(a.size(), 0);
    
    for (int i=0, j=a.size()-1; i<a.size(); ++i, --j){
        res[i] = a[j];
    }
    
    return res;
}