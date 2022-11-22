#include <iostream>

using namespace std;

void print(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubbleSort(int *arr,int n) {

    for(int i = 0; i < n; i++) {
        bool swapped = false;
        for(int j = 0; j < n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false) {
            break;
        }
    }
}

void sotarrayrec(int *arr,int n) {
    //base case already sorted
    if(n == 0 || n == 1) {
        return;
    }


    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }

    sotarrayrec(arr,n-1);

}

int main()
{
    int arr[] = {2,3,1,4,6,5,7,8,3};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Befor: ";
    print(arr,n);

    sotarrayrec(arr,n);

    cout<<"After sot: ";
    print(arr,n);

    


    return 0;
}