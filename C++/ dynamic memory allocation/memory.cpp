#include <iostream>
using namespace std;

#define PI 3.14

void print(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    // int n;
    // cin>>n;
    
    // int *arr = new int[n];

    // for(int i = 0; i < n; i++) {
    //     cin>>arr[i];
    // }


    // print(arr,n);

    int r = 5;

    double area = PI * r * r;

    cout<<area<<endl;


    

    return 0;
}