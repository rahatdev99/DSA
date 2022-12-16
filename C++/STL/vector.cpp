#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);

    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> list(a);
    for(int i:list) {
        cout<<i<<endl;
    }

    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(100);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size-> "<<v.capacity()<<endl;
    v.push_back(300);
    cout<<"Size-> "<<v.capacity()<<endl;

    cout<<"Size: "<<v.size()<<endl;

    cout<<"at: "<<v.at(2)<<endl;

    cout<<"Empty: "<<v.empty()<<endl;
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;

    cout<<"Befor clear: "<<v.size()<<endl;
    v.clear();//vector clear
    cout<<"After clear: "<<v.size()<<endl;
    
    return 0;
}