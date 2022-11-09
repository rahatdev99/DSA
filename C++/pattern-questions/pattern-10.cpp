#include <iostream>

using namespace std;



int main()
{
    int n,row = 1;
    cin>>n;

    char start = 'A';

    while(row <= n) {
        int col = 1;
        while(col <= n) {
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}