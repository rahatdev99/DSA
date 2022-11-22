#include <iostream>

using namespace std;

int binarySearch(int *arr,int key,int low,int hight) 
{

    if(low > hight) {
        return -1;
    }

    int mid = low+(hight-low) / 2;

    if(arr[mid] == key) return mid;

    if(arr[mid] < key) {//right side
        return binarySearch(arr,key,mid+1,hight);
    }
    else{//left side
        return binarySearch(arr,key,low,mid-1);
    }
}

int main()
{
    int arr[] = {2,3,4,6,8,12,22,25,26,28,30,35,38,40};
    int size = sizeof(arr)/sizeof(int);
    
    int key;
    cin>>key;

    int ans = binarySearch(arr,key,0,size-1);

    if(ans != -1) {
        cout<<"Index: "<<ans<<endl;
    } 
    else{
        cout<<"Not found!"<<endl;
    }

    if(ans == size-1) {
        cout<<"Ans: "<<ans<<endl;
    }


    return 0;
}