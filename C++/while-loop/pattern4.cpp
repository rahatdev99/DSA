#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1,counter = 1;

    while(i <= n) {
        int j = 1;
        while (j <= n)
        {
            cout<<counter<<" ";
            counter++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    return 0;
}