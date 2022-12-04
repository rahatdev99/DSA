#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[],int n,int key) {
    int low = 0;
    int hight = n-1;

    while(low <= hight) {
        int mid = low + (hight-low) / 2;

        if(arr[mid] == key) return true;

        if(arr[mid] < key) low = mid+1;
        else hight = mid-1;
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    if(uniqueOccurrences(arr,n,key)){
        cout<<"Found arr!"<<endl;
    }
    else{
        cout<<"Not found arr!"<<endl;
    }


    return 0;
}