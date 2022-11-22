#include <iostream>

using namespace std;

void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void mearge(int *arr,int start,int end) {

    int mid = start + (end-start) / 2;

    int len1 = mid - start + 1;
    int len2 = mid - end;

    int *first = new int(len1);
    int *second = new int(len2);

    int mainArrayIndex = start;

    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    int k = mid+1;

    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2) {
        
    }


}

void meargeSort(int *arr,int start,int end) {
    if(start > end) return;

    int mid = start + (end-start) / 2;

    meargeSort(arr,start,mid);

    meargeSort(arr,mid+1,end);

    mearge(arr,start,end);
}

int main()
{
    int arr[] = {2,3,1,4,6,5,7,8,3};
    int n = sizeof(arr) / sizeof(int);

    // meargeSort(arr,n);
    
    return 0;
}