#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n) {
    for(int i = 0; i < (n-1); i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex],arr[i]);
    }
}

void selectionSort1(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

void bubbleSort1(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        int swaping = 1;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swaping = 0;
            }
        }
        if(swaping == 1) break;
    }
}

void bubbleSort(int arr[],int n) {
    for(int i = 0; i < (n-1); i++) {
        int flag = 0;
        for(int j = 0; j < (n-i-1); j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }

        if(flag == 0) break;

    }
}

void insertionSort(int arr[],int n) {

    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j >= 0; j--) {
            if(arr[j] > temp) arr[j+1] = arr[j];
            else break;
        }
        arr[j+1] = temp;
    }

}

void insertionSort1(int arr[],int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else break;

            j--;
        }

        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {98,52,1,23,67,23,12,56,89};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Befor: ";
    printArr(arr,n);

    insertionSort1(arr,n);

    cout<<"After: ";
    printArr(arr,n);
    return 0;
}