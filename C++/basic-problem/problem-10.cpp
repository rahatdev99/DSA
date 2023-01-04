#include <iostream>
using namespace std;

int main() {
    int T,i,r1,r2,B,boll_played;
    double current_rr,asking_rr;

    cin>>T;

    while(T--) {
        cin>>r1>>r2>>B;

        boll_played = 300 - B;
        current_rr = (r2 / boll_played);
        asking_rr = (r1-r2) + 1 / B *6;

        cout<<current_rr<<" "<<asking_rr<<endl;

    }
    
    return 0;
}