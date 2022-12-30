#include <iostream>
using namespace std;

inline int factorial(int n) {
    //base case
    if(n == 0) 
       return 1;  

    int smallProblem = factorial(n-1);
    int biggerProblem = n * smallProblem;

    return biggerProblem;
}

int power(int n) {
    //base case
    if(n == 0) 
      return 1;

    int small = power(n-1);
    int big = 2 * small;

    return big;  
}

void print(int n) {
    if(n == 0)
      return; 

    print(n-1);

    cout<<n<<endl;
      
}

int main()
{
    int n;
    cin>>n;

    cout<<endl;

    int ans = factorial(n);

    cout<<"Factorial: "<<ans<<endl;

    int ansPower = power(n);

    cout<<n<<" power "<<ansPower<<endl;

    print(n);

    return 0;
}