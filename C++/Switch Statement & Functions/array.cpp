#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i = 0; i < n; i =+ 2) {
        if(i+1 < n) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}