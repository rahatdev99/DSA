#include <iostream>
using namespace std;

void print(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr,int s,int e) {

    int mid = s + (e-s) / 2;

    int len1 = mid - s +1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;

    for(int i = 0; i < len1; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    
    while(index1 < len1) {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int arr[],int s,int e) {
    if(s >= e) 
       return;

    int mid = s + (e-s) / 2;   

    //left part sort
    mergeSort(arr,s,mid);
    //right part sort
    mergeSort(arr,mid+1,e); 

    merge(arr,s,e);  
}

int main() 
{
    int arr[] = {2,4,43,9,1,13};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    print(arr,n);
    return 0;
}