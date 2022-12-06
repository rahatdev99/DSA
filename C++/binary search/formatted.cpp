#include <iostream>

using namespace std;

int main() {
	int n;
	int x1,x2,x3;
	cin >> n;

	if(n < 20000000) {
		x3 = n % 1000;
		n = n / 1000;
		x2 = n % 1000;
		n = n / 1000;
		x1 = n % 1000000;
		cout<<x1<<","<<x2<<","<<x3<<endl;
	}
    
	
	return 0;
}