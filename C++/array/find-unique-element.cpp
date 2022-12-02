#include <iostream>
using namespace std;

int findUniqueElement(int arr[],int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {

    int arr[] = {2,3,1,6,3,6,2};

    int size = sizeof(arr) / sizeof(int);

    int asnwer = findUniqueElement(arr,size);

    cout<<asnwer<<endl;
    



}