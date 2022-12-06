#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n) {

    for(int i = 0; i < n-1; i++) {
        int mainIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[mainIndex]) {
                mainIndex = j;
            }
        }
        swap(arr[mainIndex],arr[i]);
    }
    
}

int main()
{
    int arr[] = {54,98,12,1,23,67,23,54,98,12,56,89};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Befor array: ";
    printArr(arr,n);

    // sort
    selectionSort(arr,n);

    cout<<"After array: ";
    printArr(arr,n);

    return 0;
}