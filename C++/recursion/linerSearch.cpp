#include <iostream>
using namespace std;

void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linerSearch(int *arr,int n,int key) {

    print(arr,n);

    if(n == 0) return false;

    if(arr[0] == key) {
        return true;
    }
    else{
        int reminPart = linerSearch(arr+1,n-1,key);
        return reminPart;
    }
}

int main() {
    int arr[] = {2,4,6,9,11,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin>>key;

    bool ans = linerSearch(arr,n,key);

    if(ans) {
        cout<<"Yes!"<<endl;
    }
    else{
        cout<<"No!"<<endl;
    }
}