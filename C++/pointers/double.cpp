#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;

    int **dptr = &ptr;

    cout<<&i<<endl;

    cout<<ptr<<endl;

    cout<<*dptr<<endl;

    return 0;
}