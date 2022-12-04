#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key) {
    int s = 0;
    int e = n-1;
    int ans = 0;

    while(s <= e) {
        int mid = s + (e-s) / 2;

        if(arr[mid] == key) {
            ans = mid;
            e = mid-1;
        }

        if(arr[mid] < key) s = mid+1;
        else e = mid-1;
    }
    return ans;
}

int listOcc(int arr[],int n,int key) {
    int s = 0;
    int e = n-1;
    int ans = 0;

    while(s <= e) {
        int mid = s + (e-s) / 2;

        if(arr[mid] == key) {
            ans = mid;
            s = mid+1;
        }

        if(arr[mid] < key) s = mid+1;
        else e = mid-1;
    }
    return ans;
}
int arrSum(int arr[],int n);

int main()
{
    int arr[] = {0,0,1,1,2,2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout<<"firasrOcc = "<<firstOcc(arr,n,2)<<endl;
    cout<<"firasrOcc = "<<listOcc(arr,n,2)<<endl;

    return 0;
}

int arrSum(int arr[],int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}