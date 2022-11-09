#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin>>n;

    // if(n > 0) {
    //     cout<<"Posa tive number!"<<endl;
    // }
    // else{
    //     cout<<"Negative number!"<<endl;
    // }

    // int a,b;
    // cin>>a>>b;

    // if(a > b) {
    //     cout<<"Max = "<<a<<endl;
    // }
    // else{
    //     cout<<"Min = "<<b<<endl;
    // }


    // int n;
    // cout<<"Enter number n: ";
    // cin>>n;

    // if(n > 0) {
    //     cout<<"Posative Number!"<<endl;
    // }
    // else{
    //     if(n < 0) {
    //         cout<<"Negative number!"<<endl;
    //     }
    //     else{
    //         cout<<"Zero!"<<endl;
    //     }
    // }

    // if(n > 0) {
    //     cout<<"Posative Number!"<<endl;
    // }
    // else if(n < 0) {
    //     cout<<"Negative number!"<<endl;
    // }
    // else{
    //    cout<<"Zero!"<<endl; 
    // }

      char ch;
      cout<<"Enter char: ";
      cin>>ch;

      if(ch >= 'A' && ch <= 'Z') {
          cout<<ch<<" "<<"is uppercase!"<<endl;
      }
      else if(ch >= 'a' && ch <= 'z') {
          cout<<ch<<" "<<"lowercase!"<<endl;
      }
      else if(ch >= '0' && ch <= '9') {
         cout<<"This is newmarick!"<<endl;
      }
      else{
         cout<<"error!"<<endl;
      }

     


    return 0;
}