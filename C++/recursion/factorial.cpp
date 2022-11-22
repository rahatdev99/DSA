#include <iostream>

using namespace std;

int factorial(int n) {
    
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int pow(int n) {
    
    if(n == 0) return 1;

    return 2 * pow(n-1);
}

void rPrint(int n) {
    if(n == 0) {
        return;
    }

    rPrint(n-1); 

    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    rPrint(n);
    return 0;
}