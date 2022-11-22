#include <iostream>

using namespace std;

void printArr(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<" ";
    }cout<<endl;
}

bool isSorted(int arr[],int size) {

    printArr(arr,size);
    cout<<"Size: "<<size<<endl;

    if(size == 0 || size == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else{
        int ans = isSorted(arr+1,size-1);
        return ans;
    }
}


int main()
{
    int arr[] = {2,3,4,120,23,45,67,89,90};
    int size = sizeof(arr) / sizeof(int);

    if(isSorted(arr,size)) {
        cout<<"array is sorted!"<<endl;
    }
    else{
        cout<<"array is not sorted!"<<endl;
    }

    return 0;
}