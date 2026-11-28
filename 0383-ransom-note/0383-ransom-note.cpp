class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for(char c:ransomNote)
        {
            mp[c]++;
        }

        for(char c:magazine)
        {
            if(mp.contains(c))
            {
                mp[c]--;
                if(mp[c]==0)
                mp.erase(c);
            }

            if(mp.empty())
            {
                return true;
            }
        }
        

        return false;

   }
};