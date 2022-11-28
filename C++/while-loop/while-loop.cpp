#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 2;
    int flag = true;

    while(i < n) {
        if(i % n == 0) {
            flag = false;
        }
        i++;
    }

    if(flag) {
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is not prime number"<<endl;
    }
    

    return 0;
}