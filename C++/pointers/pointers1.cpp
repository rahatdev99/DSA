#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1344,2,3,4,5};

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*arr+3<<endl;

    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;

    int i = 4;

    cout<<i[arr]<<endl;

    cout<<i[arr]<<endl;
  


    return 0;
}