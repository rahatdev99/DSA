#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int firstDigit;
        int listDigit = n % 10;

        while(n != 0) {
            
            firstDigit = n;
            n = n / 10;
        }

        int sum = firstDigit + listDigit;

        cout<<sum<<endl;
    }
    return 0;
}