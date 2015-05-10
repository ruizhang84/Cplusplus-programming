#include<iostream>

using namespace std;

void quickSort(int array[], int a, int b);
int partition(int array[], int a, int b);

int main(){
    int n,m;
    int *arr = new int[5000];

    cin >> n >> m;
    for (int i = 0; i<n; ++i){
       cin >> arr[i];
    }
    

    quickSort(arr, 0, n);
/*    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }                            */
    cout << arr[m-1] <<endl;
    
    delete[] arr;
    return 0;
}


void quickSort(int array[], int start, int end)
{
    if(start < end)
    {
        int pIndex = partition(array, start, end);
        quickSort(array, start, pIndex);
        quickSort(array, pIndex+1, end);
    }
}

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int partition(int array[], int start, int end)
{
    int pivot = array[start];
    int pIndex = start;
    
    for(int i = start+1; i < end; ++i)
    {
        if(array[i] <= pivot){
            pIndex++;
            swap(array[i], array[pIndex]);
        }
    }

    swap(array[start], array[pIndex]);

    return pIndex;
}




