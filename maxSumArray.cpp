#include<iostream>

using namespace std;
int MaxArray(int *a, int n);

int main(){
    int n;
    int *arr = new int[100000];

    cin >> n;
    for (int i = 0; i<n; ++i){
       cin >> arr[i];
    }
    cout<< MaxArray(arr,n) <<endl;

    delete[] arr; 
    return 0;
} 

int MaxArray(int *a, int n){
    int maxSum = a[0];
    int currSum = 0;
    for (int j = 0; j<n; ++j){
        currSum = (a[j] > currSum +a[j]) ? a[j]: currSum +a[j];
        maxSum = (maxSum > currSum) ? maxSum: currSum;
 
    }
    return maxSum;
}





