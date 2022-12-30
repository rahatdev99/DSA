#include <iostream>
using namespace std;

int factorial(int n) {
    //base case..
    if(n == 0) 
       return 1;

    int smallProblem = factorial(n-1);
    int bigProblem = n * smallProblem;

    return bigProblem;   
}

int power(int n) {
    //base case
    if(n == 0)
       return 1;

    return 2 * power(n-1);   
}

void print(int n) {
    if(n == 0) 
      return;

    print(n-1);

    cout<<n<<endl;  
}

 

int sumS(int n) {
    if(n == 0) 
      return 0;

    return n + sumS(n-1);  
}



int main() {
    int n;

    cin>>n;
    
   int ans = sumS(n);

   cout<<ans<<endl;
    
    return 0;
}