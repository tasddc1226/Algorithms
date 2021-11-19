/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    double size = arr.size();
    double plus = 0; double minus = 0; double zero = 0;
    for (int i=0; i<arr.size(); i++){
        if (arr[i] == 0) zero += 1;
        else if (arr[i] < 0) minus += 1;
        else plus += 1;
    }
    
    double pRate = 0.0; double mRate = 0.0; double zRate = 0.0;
    pRate = plus / size;
    mRate = minus / size;
    zRate = zero / size;
    
    
    cout << fixed;
    cout.precision(6);
    cout << pRate << "\n" << mRate << "\n" << zRate;


}