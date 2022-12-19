#include <iostream>
using namespace std;

int isPresent(int arr[][4],int row,int col,int key) {
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            if(arr[i][j] == key) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {

    int arr[3][4];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int terget;
    cin>>terget;

    if(isPresent(arr,3,4,terget)) {
        cout<<"Element present!"<<endl;
    }
    else{
        cout<<"Element not present!"<<endl;
    }
    
    return 0;
}