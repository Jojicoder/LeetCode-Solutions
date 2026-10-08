//Add Contains Duplicate solution using C++ unordered_set

class Solution {
public:
    bool isAnagram(string s, string t) {
     
     unordered_map<char, int> mp;

     if(s.size() != t.size())
        return false;

    for(char n : s){
        mp[n]++;
    }

    for(char n : t){
        mp[n]--;
        if(mp[n]<0)
            return false;
    }

    return true;


    }
};