#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n) {

   for(int i = 0; i < n-1; i++) {
      int minIndex = i;
      for(int j = i+1; j < n; j++) {
          if(arr[j] < arr[minIndex]) {
              minIndex = j;
          }

          swap(arr[minIndex],arr[i]);
      }
   }
    
}



int main()
{
    int arr[] = {98,52,1,23,67,23,12,56,89};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Befor array: ";
    printArr(arr,n);

    // sort
    selectionSort(arr,n);

    cout<<"After array: ";
    printArr(arr,n);

    return 0;
}