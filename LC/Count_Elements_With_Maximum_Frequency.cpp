#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
using namespace std;

int maxFrequencyElements(vector<int>& arr){
    unordered_map<int,int> mp;
    
    for(auto i : arr)
        mp[i]++;
    
    int maxi = INT_MIN;
    for(auto i : mp)
    {
        if(i.second > maxi)
            maxi = i.second;
    }
    
    int count = 0;
    
    for(auto i:mp)
    {
        if(i.second == maxi)
            count+=i.second;
    }
    
    return count;
}

int main()
{
    vector<int> arr = {1,2,2,3,1,4};
    int length = maxFrequencyElements(arr);
    cout << length;
}
