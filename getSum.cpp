#include <iostream>
using namespace std;

/* fill in the code */
template <typename T>
T getSum(T* array, int n){
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return sum;
}


int main()
{
    int n, m;
    cin >> n >> m;
    int* arr_int = new int[n];
    double* arr_double = new double[m];
    for (int i = 0; i < n; ++i)
    cin >> arr_int[i];
    for (int i = 0; i < m; ++i)
    cin >> arr_double[i];
    getSum(arr_int, n);
    cout << getSum(arr_int, n) << endl;
    cout << getSum(arr_double, m) << endl;
    return 0;
}