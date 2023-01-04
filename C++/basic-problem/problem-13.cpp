#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string str,key;
        int count = 0;
        cin>>str>>key;

        for(int i = 0; i < str.length(); i++) {
            if(key[0] == str[i]) count++;
        }

        cout<<count<<endl;
    }

    return 0;
}