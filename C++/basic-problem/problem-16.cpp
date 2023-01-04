#include <iostream>
using namespace std;

void print_reverse(string str) {
    for(int i = str.length()-1; i >= 0; i--) {
        cout<<str[i];
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s,word;
        cin>>s;

        for(int j = 0,k = 0; j < s.length(); j++) {
            if(s[j] != ' ') {
                word[k] = s[j];
                k++;
            }
            else if(k > 0) {
                word[k] == '\0';
                cout<<word<<endl;
                k = 0;
            }

            if(k > 0) {
                word[k] = '\0';
                cout<<word<<endl;
            }

        }

        print_reverse(word);
 
    }
    return 0;
}