#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int n) {
    int s = 0, e = n-1;
    while(s <= e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {11,7,3,12,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr,n);

    printArr(arr,n);


    return 0;
}