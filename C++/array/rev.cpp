#include <iostream>
using namespace std;

void arrPrint(int arr[],int n) {
    
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void revers(int arr[],int n) {
    int start = 0;
    int end = n-1;

    while(start <= end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void rev(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        int j = n-1;
        if(i <= j) {
            swap(arr[i],arr[j]);
        }
        j--;
    }
}

void sortArray(int arr[],int n) {
    
    for(int i = 0; i < n; i++) {
        arrPrint(arr,n);
        for(int j = n-i-1; j < n; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] =  {100,5,3,4,67,6,7,87,56,1,87};
    int n = sizeof(arr) / sizeof(int);

    cout<<endl;

    sortArray(arr,n);

    return 0;
}