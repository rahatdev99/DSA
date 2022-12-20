#include <iostream>
using namespace std;

void print(int *p) {
    cout<<*p<<endl;
}

void uptate(int *p) {
    *p = *p + 1;
}

int getSum(int arr[],int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += i[arr];
    }

    return sum;
}

int main()
{
    int valu = 5;
    int *p = &valu;

    // print(p);
    
    int arr[5] = {1,2,3,4,5};
    int sum = getSum(arr,5);

    cout<<sum<<endl;
    return 0;
}