#include <iostream>

using namespace std;

int main()
{
    int a = 123;
    cout<<a<<endl;

    char b = 'V';
    cout<<b<<endl; 

    bool bl = true;
    cout<<bl<<endl;

    float f = 3.14;
    cout<<f<<endl;

    cout<<"size of a: "<<sizeof(a)<<endl;  
    cout<<"size of b: "<<sizeof(b)<<endl;  
    cout<<"size of bl: "<<sizeof(bl)<<endl;  
    cout<<"size of f: "<<sizeof(f)<<endl; 

    int a1 = 'H';
    cout<<a1<<endl;

    char ch = 72;
    cout<<ch<<endl;

    unsigned int un = -1234;

    cout<<un<<endl;

    string result = (3 % 2 == 0) ? "even" : "odd";

    cout<<result<<endl;


    return 0;
}