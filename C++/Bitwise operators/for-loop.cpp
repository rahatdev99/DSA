#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int sum = 0;

    // for(int i = 0; i < n; i++) {
    //     sum += i;
    // }
    // cout<<sum<<endl;

    // for(int i = 0; i < n; i++) {
    //     if(i % 2 == 0) {
    //         cout<<i<<" "<<"even"<<endl;
    //     }
    //     else{
    //         cout<<i<<" "<<"odd"<<endl;
    //     }
    // }
    
    int n;
    cin>>n;
    
    // bool isPrime = 1;

    // for(int i = 2; i < n; i++) {
    //     if(n % i == 0) {
    //        isPrime = 0;
    //        break; 
    //     }
    // }

    // if(isPrime == 0) 
    //     cout<<"Not a prime number!"<<endl;
    
    // else cout<<"Prime mumber!"<<endl;

    for(int i = 1; i < n; i++) {
        if(i % 2 == 0) {
            continue;   
        }
        cout<<i<<endl;   
    }

    return 0;
}