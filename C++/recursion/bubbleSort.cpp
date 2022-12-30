#include <iostream>
using namespace std;

void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr,int n) {
    print(arr,n);
    if(n == 0 || n == 1) {
        return;
    }

    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,n-1);
}

int main() {
    int arr[] = {3,4,1,5,7,3,4,8,5};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr,n);

    print(arr,n);
}