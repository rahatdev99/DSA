#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        for(int i = 0; i < str.length(); i++) {
            if(str[i]=='a'||str[i]=='e'||str[i] == 'i'||str[i]=='o'||str[i]=='u') {
                cout<<str[i];
            }
        }
        cout<<endl;

    }

    return 0;
}