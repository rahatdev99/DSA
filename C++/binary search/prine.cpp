#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag = true;

    for(int i = 2; i < n; i++) {
        if(n % 2 == 0) {
            flag = false;
            break;
        }
    }

    if(flag) 
       cout<<"Yes"<<endl;  
    else
       cout<<"No"<<endl;
    
    return 0;
}