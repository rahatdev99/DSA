#include <iostream>
using namespace std;

bool isSorted(int *arr,int n) {
    if(n == 0 || n == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else{
        bool reminingPart = isSorted(arr+1,n-1);
        return reminingPart;
    }
}

bool binarySearch(int *arr,int s,int e,int key) {

    if(s > e) return false;

    int mid = s + (e-s) / 2;

    if(mid == key) return true;

    if(arr[mid] < key) return binarySearch(arr,mid+1,e,key);
    else return binarySearch(arr,s,mid-1,key);   

}

int main()
{
    int arr[] = {2,4,6,9,11,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    if(binarySearch(arr,0,n-1,11)) {
        cout<<"Yes!"<<endl;
    }
    else{
        cout<<"No!"<<endl;
    }

}