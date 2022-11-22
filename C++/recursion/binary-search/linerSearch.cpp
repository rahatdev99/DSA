#include <iostream>

using namespace std;

bool lenerSearch(int *arr,int size,int key) {

    if(size == 0) {
        return false;
    }

    if(arr[0] == key) {
        return true;
    }
    else{
        bool ans = lenerSearch(arr+1,size-1,key);
        return ans;
    }
}

int main()
{
    int arr[] = {2,3,4,120,23,45,67,89,90};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    if(lenerSearch(arr,size,key)) {
        cout<<"YES!"<<endl;
    } 
    else{
        cout<<"NO!"<<endl;
    }

    return 0;
}