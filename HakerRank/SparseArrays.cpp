/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> res(queries.size(), 0);
    
    for (int i=0; i < queries.size(); ++i){
        string target = queries[i];
        
        for (int j=0; j < strings.size(); ++j){
            if (target == strings[j]){
                res[i]++;
            }
        }
    }
    
    return res;
}
