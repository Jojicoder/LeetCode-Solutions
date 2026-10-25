class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int ans1[256] = {0};
        int ans2[256] = {0};

        for(int i = 0 ;i < s.size();i++)
        {
            if(ans1[s[i]] != ans2[t[i]])
            {
                return false;
            }
            ans1[s[i]] = i+1;
            ans2[t[i]] = i+1;
        }
        
        return true;
        
    }

};