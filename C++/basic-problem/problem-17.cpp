#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        int count = 0;

        for(int i = 0; i < str.length(); i++) {
            if(str[i]=='a'||str[i]=='e'||str[i] == 'i'||str[i]=='o'||str[i]=='u') {
                count++;
            }
        }

       cout<<"Number vowels: "<<count<<endl; 
    }
    return 0;
}