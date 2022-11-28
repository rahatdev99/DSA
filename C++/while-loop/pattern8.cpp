#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 0;

    while(row < n) {
        int col = 0;
        while(col <= row) {
            cout<<col+row+1<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
    return 0;
}