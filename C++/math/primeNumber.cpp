#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
       return false;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrime(int n) {
    int coutn = 0;
    for(int i = 2; i < n; i++) {
        if(isPrime(i)) {
            coutn++;
        }
    }

    return coutn;
}

int count(int n) {
   return countPrime(n);
}

int main()
{
    int n;
    cin>>n;

    if(isPrime(n)) {
        cout<<n<<" is prime number!"<<endl;
    }
    else{
        cout<<n<<" is not prime number!"<<endl;
    }

    return 0;
}