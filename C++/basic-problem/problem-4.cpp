#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t>>n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}