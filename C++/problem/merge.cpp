#include <iostream>
using namespace std;

void printArr(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr1,int n1,int *arr2,int n2,int *arr3) {
    int i = 0, j = 0;
    int k = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    
}

int main()
{
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};

    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr1) / sizeof(int);

    int arr[n1+n2] = {0};

    merge(arr1,n1,arr2,n2,arr3);

    
    printArr(arr3,(n1+n2))


    return 0;
}