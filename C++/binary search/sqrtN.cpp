#include <iostream>
using namespace std;

int sqrtN(int n) {
    int s = 0;
    int e = n;
    int ans = -1;

    while(s <= n) {
        int mid = s + (e-s) / 2;

        int sqruare = mid*mid;
        
        if(sqruare == n) {
            return mid;
        }

        if(sqruare < n) {
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;

    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(double i = ans; i < precision; i++) {
        factor = factor/10;
        for(double j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }

    return ans;
}

int main()
{

    int n;
    cin>>n;

    int tempSol = sqrtN(n);

    cout<<morePrecision(n,3,tempSol)<<endl;

    return 0;
}