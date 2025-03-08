#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void display(vector<int> arr){
    for(auto i : arr)
        cout << i << " ";
    cout << endl;
}

 vector<int> majorityElement(vector<int>& arr){
     vector<int> ans;
     unordered_map<int,int> mp;
     int n = arr.size();
     
     for(auto i : arr)
        mp[i]++;
    
    for(auto i : mp)
    {
        if(i.second > n/3)
            ans.push_back(i.first);
    }
    return ans;
 } 

int main()
{
    vector<int> arr = {3,2,3};
    vector<int> ans = majorityElement(arr);
    display(ans);
    return 0;
}
