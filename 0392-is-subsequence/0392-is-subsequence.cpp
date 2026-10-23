class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        for(char c: s)
        {
                if(t.find(c)==string::npos){
                    return false;
                }
                
        }
        
        if(s.size()==0)
        {
            return true;
        }

        int sup  = 0;
        int tdown= 0;
        bool ans=false;
        while(tdown<t.size())
        {
            if(s[sup] == t[tdown] && sup < s.size())
            {
                sup++;
            }
            
                tdown++;
        

            if(s[sup]==s[s.size()])
            {
                ans = true;
            }
        }

        
        return ans;
    }
};