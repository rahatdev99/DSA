#include <iostream>
using namespace std;

void reverse(string& name,int i,int j) {
    if(i > j)
      return ;

    swap(name[i],name[j]);  
    i++;
    j--;
    reverse(name,i,j);
}

bool checkPalindrome(string str,int i,int j) {

    if(i > j) {
        return true;
    }

    if(str[i] != str[j]) {
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
    
}

int main()
{
    string name = "abccba";
    
    bool ans = checkPalindrome(name,0,name.length()-1);

    if(ans) {
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<"Not Palindrome!"<<endl;
    }
}