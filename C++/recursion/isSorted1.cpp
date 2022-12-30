#include <iostream>
using namespace std;

void inputArray(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
}
void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i];
    }
    cout<<endl;
}

bool isSorted(int *arr,int n) {
    if(n == 0 || n == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else{
        int reminPart = isSorted(arr+1,n-1);
        return reminPart;
    }

}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    // array input
    inputArray(arr,n);

    bool ans = isSorted(arr,n);

    return 0;
}