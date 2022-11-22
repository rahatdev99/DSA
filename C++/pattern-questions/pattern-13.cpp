#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {
        int col = 0;
        char start = 'A' + n-row;
        while(col <= row) {
            cout<<start<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}