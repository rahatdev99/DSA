#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool isPrime = 1;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0) {
        cout<<"Prime number!"<<endl;
    }
    else{
        cout<<"Not prime number!"<<endl;
    }

    return 0;
}