#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int t;
    char n[101];

    cin>>t;

    while(t--) {
        cin>>n;
        int len = strlen(n);

        if(n[len-1] % 2 == 0) {
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }

    return 0;
}