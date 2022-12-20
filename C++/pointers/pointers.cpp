#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    int *ptr = &n;

    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    *ptr = 100;

    cout<<*ptr<<endl;

    cout<<n<<endl;


    cout<<"Size of n: "<<sizeof(n)<<endl;
    cout<<"Size of ptr: "<<sizeof(ptr)<<endl;

    


    return 0;
}