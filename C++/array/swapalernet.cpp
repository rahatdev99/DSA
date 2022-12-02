#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {3,4,1,6,8,2,7,9};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i+=2) {
        if(i+1 < n) {
            swap(arr[i],arr[i+1]);
        }
    } 

    printArr(arr,n);

    
    return 0;
}