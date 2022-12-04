#include <iostream>
using namespace std;

int getPivot(int arr[],int n) {

    int s = 0;
    int e = n-1;

    while(s < e) {
        int mid = s + (e-s) / 2;

        if(arr[mid] >= arr[0]) s = mid+1;
        else e = mid;
    }
    return s;
}

int main()
{
    int arr[] = {8,10,17,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Pivot is: "<<getPivot(arr,n)<<endl;
    return 0;
}