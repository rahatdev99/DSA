#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        double sq_root = sqrt(n);

        if(ceil(sq_root) == floor(sq_root)) 
           cout<<"Yes"<<endl;
        else
           cout<<"No"<<endl;   

    }
    return 0;
}