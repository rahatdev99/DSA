#include <iostream>
using namespace std;

int main() {
    char line[] = "9 2 3 1 23";

    int i = 0,count = 0;

    while(line[i] != '\0') {
        if(line[i] == ' ') {
            count++;
        }
        i++;
    }

    cout<<count<<endl;
   
    return 0;
}