
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nums[] = {4,3,2,7,8,2,3,1};
    int size = sizeof(nums) / sizeof(int);
    //sort in array
    sort(nums,nums+size);
    //find duplicte
    for(int i = 0; i < size-1; i++) {
        if(nums[i] == nums[i+1]) {
            cout<<nums[i]<<" ";
        }
    }

    return 0;
}