#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    int n1,n2,n3;

    while(t--) {
        cin>>n1>>n2>>n3;
        if(n1 > n2) {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    return 0;
}