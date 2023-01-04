#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    // h e l l o

    while(t--) {
        string s;
        cin>>s;
        int count[26];

        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'a' && s[i] <= 'a'; i++) {
                count[s[i]-'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            char ch = i+'a';
            if(count[i] != 0) {
                cout<<ch<<" = "<<count[i]<<endl;
            }
        }
    }
    return 0;
}


