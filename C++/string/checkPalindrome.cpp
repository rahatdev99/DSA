#include <iostream>
using namespace std;

char toLowerCase(char ch[]) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int length(char ch[]) {
    int coutn = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        coutn++;
    }
    return coutn;
}

bool checkPalindrome(char ch[],int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        if(ch[s] != ch[e]) {
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;
}

int main() {

    char ch[101];
    cin>>ch;

    int len = length(ch);

//    cout<<checkPalindrome(ch,len)<<endl;

    char chake1 = toLowerCase('A');
    char chake2 = toLowerCase('B');

    cout<<chake1<<" "<<chake2<<" "<<endl;

    
}