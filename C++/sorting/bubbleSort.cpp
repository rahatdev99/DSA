#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int array[], int size) {
    
  for (int step = 0; step < (size-1); ++step) {
    int swapped = 0;
    for (int i = 0; i < (size-step-1); ++i) {
      if (array[i] > array[i + 1]) { 
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }

    if (swapped == 0)
      break;
  }
}

void bubbleSort2(int arr[],int n) {
    for(int i = 0; i < (n-1); i++) {
        int swapped = 0;
        for(int j = 0; j < (n-i-1); j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }

        if(swapped == 0) {
            break;
        }
    }
}

void bubbleSort3(int arr[],int n) {
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


int main()
{
    int arr[] = {98,52,1,23,67,23,12,56,89};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Befor array: ";
    printArr(arr,n);

    // sort
    bubbleSort3(arr,n);

    cout<<"After array: ";
    printArr(arr,n);
    return 0;
}