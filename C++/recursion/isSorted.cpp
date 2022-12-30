#include <iostream>
using namespace std;

bool isSorted(int *arr,int n) {
    if(n == 0 || n == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else{
        bool reminingPart = isSorted(arr+1,n-1);
        return reminingPart;
    }
}

int main()
{
    int arr[] = {2,4,6,9,11,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    if(isSorted(arr,n)) {
        cout<<"Yes!"<<endl;
    }
    else{
        cout<<"No!"<<endl;
    }

}