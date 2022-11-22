#include <iostream>

using namespace std;

int binarySearch1(int *arr,int key,int size) {
    int low = 0;
    int hight = size-1;

    while(low <= hight) {
        int mid = (low+hight) / 2;

        if(arr[mid] == key) return mid;

        if(arr[mid] < key) low = mid+1;
        else hight = mid - 1;
    }
    return -1;
}

int binarySearch2(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main()
{
    int arr[] = {2,4,5,7,8,9,12,43,56,78,90,};
    int size = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    //int result = binarySearch2(arr, key, 0, size - 1);
    
    int result = binarySearch1(arr, key,size);

    if(result != -1) {
        cout <<"Index: "<<result<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }

    return 0;
}