#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
    int maxlength = 0;
    int j = 0;
    unordered_map<char,int> mp;
    
    for(int i = 0;i < s.size();i++){
        char t = s[i];
        if(mp.find(t) != mp.end() && mp[t] >= j)
            j = mp[t] + 1;
        maxlength = max(maxlength,i - j + 1);
        mp[t] = i;
    }
    return maxlength;
}

int main()
{
    string s = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    cout << length;
    return 0;
}
