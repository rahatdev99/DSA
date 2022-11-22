#include <iostream>

using namespace std;

void printArr(int *arr,int n) {
    cout<<"Size of arr is: "<<n<<endl;
    for(int i = 0; i < n; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

bool linerSrarch(int *arr,int size,int key) {

    printArr(arr,size);
    //base case
    if(size == 0) 
       return false;

    if(arr[0] == key) {
        return true;
    }
    else{
        bool remPat = linerSrarch(arr+1,size-1,key);
        return remPat;
    }   
}

int main()
{
    int arr[] = {3,5,1,2,6};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    bool ans = linerSrarch(arr,size,key); 

    if(ans) {
        cout<<"YES!"<<endl;
    }
    else{
        cout<<"NO!"<<endl;
    }

    return 0;
}