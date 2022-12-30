#include <iostream>
using namespace std;

int sumOfArray(int *arr,int n) {
    
    if(n == 0) 
      return 0;

    if(n == 1) 
       return arr[0];


    int remienPart = sumOfArray(arr+1,n-1);

    int sum = arr[0] + remienPart;

    return sum;     

}

int main() {
   
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = sumOfArray(arr,n);

    cout<<"Sum: "<<ans<<endl;
}