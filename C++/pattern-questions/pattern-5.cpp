#include <iostream>

using namespace std;

int main()
{
    int n,count = 1,i = 1;
    cin>>n;

    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}