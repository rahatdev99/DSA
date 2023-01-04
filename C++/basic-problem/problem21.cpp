#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        string str;
        cin>>str;

        int i = 0,j = str.length()-1;

        while(i <= j) {
            swap(str[i],str[j]);
            i++;
            j--;
        }

        cout<<str<<endl;
    }
    return 0;
}