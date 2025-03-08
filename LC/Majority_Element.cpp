#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int> arr){
    int n = arr.size();
    unordered_map<int,int> mp;
    
    for(auto i : arr)
        mp[i]++;
    
    int index = 0;
    for(auto i :  mp)
    {
        if(i.second > n/2) 
            index = i.first;
    }
    return index;
}

int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << ans;
    return 0;
}
