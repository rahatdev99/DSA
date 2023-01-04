#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;

    while(t--) {
        cin>>n;
        long long int factorial = 1;

        for(int i = 2; i <= n; i++) {
            factorial *= i;
        }

        cout<<factorial<<endl;
        
    }

    return 0;
}