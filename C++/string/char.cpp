#include <iostream>
using namespace std;

int length(char ch[]) {
    int coutn = 0;
    for(int i = 0; ch[i] != '\0'; i++) {
        coutn++;
    }
    return coutn;
}

void reverse(char ch[],int n) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}

int main()
{
    char ch[123];
    cin>>ch;
    cout<<ch<<endl;
    int len = length(ch);

    reverse(ch,len);

    cout<<ch<<endl;

    return 0;
}