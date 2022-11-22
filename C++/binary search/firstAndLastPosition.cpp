#include <iostream>

using namespace std;

int firstOcc(int arr[],int k,int n) {
    int start = 0;
    int end = n;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end-start) / 2;
        
        if(arr[mid] == k) {
            ans = mid;
            end = mid-1;
        }

        if(arr[mid] < k) start = mid+1;
        else end = mid-1;
    }

    return ans;
}

int listOcc(int arr[],int k,int n) {
    int start = 0;
    int end = n;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end-start) / 2;
        
        if(arr[mid] == k) {
            ans = mid;
            start = mid+1;
        }

        if(arr[mid] < k) start = mid+1;
        else end = mid-1;
    }

    return ans;
}

int main()
{
    int arr[] = {0, 0, 1, 1, 2, 2, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;

    int anwser = firstOcc(arr,k,n-1);
    int anwser2 = listOcc(arr,k,n-1);
    
    cout<<"Firstocc: "<<anwser<<endl;
    cout<<"Listocc: "<<anwser2<<endl;

    return 0;
}