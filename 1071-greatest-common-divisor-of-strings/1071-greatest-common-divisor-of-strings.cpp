class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        string ans="";

        for (int len = 1; len <= str2.size(); len++) {
            string candidate = str2.substr(0, len);
           
            if(str1.size()% len != 0|| str2.size() %len != 0)
            {
                continue;
            }

            string temp1 = "";
            string temp2 = "";

            int repeat1 = str1.size() / len;
            int repeat2 = str2.size() / len;

            for(int i = 0; i<repeat1;i++){
                temp1 += candidate;
            }

            for(int i = 0;  i< repeat2;i++)
            {
                temp2 += candidate;
            }

            if(temp1== str1 && temp2 == str2){
                ans = candidate;
            }
        }
        return ans;
    }
};