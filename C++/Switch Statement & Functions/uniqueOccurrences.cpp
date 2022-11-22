#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool uniqueOccurrences(int *arr,int size) {
    int i = 0;
    sort(arr,arr+size);
    vector<int> ans;

    while(i < size) {
        int count = 1;

        for(int j = i+1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        ans.push_back(count);
        i = i+count;

    }
    sort(ans.begin(),ans.end());

        for(int i = 0; i < ans.size()-1; i++) {
            
            if(ans[i] == ans[i+1]) {
                return false;
            }
        }
        return true;
}

int main()
{
    int arr[] = {1,2,2,1,1};
    int size = sizeof(size) / sizeof(int);

    bool ans = uniqueOccurrences(arr,size);

    if(ans) {
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }

    return 0;
}