#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int s,e,count = 0;
        cin>>s>>e;

        for(int i = s; i < e; i++) {
            if(e % i != 0) {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}