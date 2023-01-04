#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0)
      return 1;

    return n * factorial(n-1);  
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int number,mod,zero_count = 0;
        cin>>number;
        long long int n = factorial(number);

        mod = n % 10;

        if(mod == 0) zero_count++;
        else break;

        n = n / 10;

        cout<<zero_count<<endl;
    }


    return 0;
}