#include <iostream>

using namespace std;

int main()
{
    // int i = 1;
    // int sum = 0;
    // while(i <= 10) {
    //     if(i % 2 == 0) {
    //         sum+=i;
    //     }
    //     i++;
    // }
    // cout<<"Sum = "<<sum<<endl;

    // int i = 2;
    // int n;
    // cin>>n;

    // while(i < n) {
    //     if(i % 2 == 0) {
    //         cout<<"Not prime!"<<endl;
    //     }
    //     i++;
    // }
    
    // int n;
    // cin>>n;
    // int i = 1;

    // while (i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    int n;
    cin>>n;
    int i = 1;

    while(i <= n) {
        int j = 1; 
        while(j <= n) {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}