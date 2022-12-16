#include <iostream>
using namespace std;

int length(char ch[]) {
    int count = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    char ch[111];

    cin>>ch;

    cout<<ch<<endl;

    int len = length(ch);

    cout<<"Length: "<<len<<endl;
}