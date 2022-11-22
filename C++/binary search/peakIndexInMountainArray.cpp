#include <iostream>

using namespace std;

int peakIndexInMountainArray(int arr[],int size)
{
    int low = 0;
    int hight = size-1;

    while(low < hight) {
        int mid = low + (hight-low) / 2;
        if(arr[mid] < arr[mid+1]) {
            low = mid+1;
        }
        else hight = mid;
    }
    return low;
}

int main()
{
    int arr[] = {0,2,1,0};
    int size = sizeof(arr) / sizeof(int);

    int answer = peakIndexInMountainArray(arr,size);

    cout<<"Answer: "<<answer<<endl;

    return 0;
}