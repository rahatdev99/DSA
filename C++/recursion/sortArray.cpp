#include <iostream>
using namespace std;

bool checkSortInArray(int arr[],int n) {
    if(n == 0 || n == 1) 
        return true;

    if(arr[0] > arr[1]) {
        return false;
    }
    else {
        bool remin = checkSortInArray(arr+1,n-1);
        return remin;
    }               
}

int getSum(int *arr,int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return arr[0];
    }

    int remin = getSum(arr+1,n-1);

    int sum = arr[0] + remin;

    return sum;
}

bool leinerSearch(int arr[],int n,int key) {

    //base case
    if(n == 0) 
      return false;

    if(arr[0] == key) {
        return true;
    }  
    else{
        bool remin = leinerSearch(arr+1,n-1,key);
        return remin;
    }

}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cin>>key;
    
    int ans = leinerSearch(arr,n,key);

    if(ans) {
        cout<<"Yea!"<<endl;
    }
    else{
        cout<<"No!"<<endl;
    }     
    
    return 0;
}