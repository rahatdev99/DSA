#include <iostream>

using namespace std;

int binarySearch(int *arr,int key,int low,int hight) 
{
    if(low > hight) {
        return -1;
    }

    int mid = low + (hight-low) / 2;

    if(arr[mid] == key) return mid;

    if(arr[mid] < key) {
        return binarySearch(arr,key,mid+1,hight);
    }
    else {
        return binarySearch(arr,key,low,hight-1);
    }
    
}

int main()
{
    int arr[] = {3,5,1,2,6};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    int ans = binarySearch(arr,key,0,size-1);

    if(ans != -1) {
        cout<<ans<<endl;
    }
    else cout<<"not found"<<endl;
    
    return 0;
}