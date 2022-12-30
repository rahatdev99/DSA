#include <iostream>
using namespace std;

void printArr(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int arrMax(int *arr,int n) {
    int max = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

bool lenearSearch(int *arr,int n,int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n;
    cin>>n;

    int *arr = new int(n);

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>n;

    bool ans = lenearSearch(arr,n,key);

    cout<<ans<<endl;
    
    return 0;
}