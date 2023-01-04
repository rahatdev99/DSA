#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;
        int count = 0;

        for(int i = 0; i < '\0'; i++) {
            if(str[i] == ' ') {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}