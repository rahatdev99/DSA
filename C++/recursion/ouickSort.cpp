#include <iostream>
using namespace std;

void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrSort(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {5,3,6,8,2,1,4,3,5,78,97,7};
    int n = sizeof(arr) / sizeof(int);
    arrSort(arr,n-1);
    print(arr,n);
    return 0;
}