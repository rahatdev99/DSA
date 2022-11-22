#include <iostream>

using namespace std;

int findIndexU(int *arr,int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result = result^arr[i];
    }
    return result;
}


int main()
{
    int arr[] = {2,3,7,13,7,3};
    int size = sizeof(arr) / sizeof(int);

    int ans = findIndexU(arr,size);

    cout<<"Answer: "<<ans<<endl;

    return 0;
}