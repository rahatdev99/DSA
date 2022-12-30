#include <iostream>
using namespace std;

void reverse(string &str,int i,int j) {

    if(i > j) {
        return;
    }

    swap(str[i],str[j]);
    ++i;
    --j;

    reverse(str,i,j);

}

bool cheakePalindrome(string str,int i,int j) {
    if(i > j)
       return true;

    if(str[i] != str[j]) {
        return false;
    }   
    else {
        return cheakePalindrome(str,i+1,j-1);
    }
}

int main() {

    string str = "rahat";

    reverse(str,0,str.length()-1);

    cout<<str<<endl;

    return 0;
}