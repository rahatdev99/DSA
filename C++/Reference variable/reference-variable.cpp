#include <iostream>
using namespace std;

void update(int &n) {
    n+=100;
}

int getSum(int *arr,int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result += arr[i];
    }
    return result;
}

int main()
{
    int i = 5;
    int &j = i;

    cout<<&i<<endl;
    cout<<&j<<endl;

    int n = 5;

    cout<<"Befor: "<<n<<endl;
    update(n);
    cout<<"After: "<<n<<endl;

    int size;
    cin>>size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int sum = getSum(arr,size);

    cout<<"Sum = "<<sum<<endl;


    int &x = sum;

    cout<<x<<endl;

    return 0;
}