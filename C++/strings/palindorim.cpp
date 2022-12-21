#include <iostream>

using namespace std;

bool isPalindrome(string str,int i,int j) {
    //base case

    if(i > j) {
        return true;
    }
    
    if(str[i] != str[j]) {
         return false;
    }   
    else {
        isPalindrome(str,i+1,j-1);
    }
              

}

int main()
{
    string str;
    cin>>str;

    int i = 0,j = str.length();

    bool ans = isPalindrome(str,i,j);

    if(ans) {
        cout<<"String is palindrome!"<<endl;
    }
    else{
        cout<<"String is not palindrome!"<<endl;
    }

    return 0;
}