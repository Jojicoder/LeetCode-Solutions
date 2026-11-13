class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans = "";

        for(int len = 1;len <= str2.size();len++){
            string candidate = str2.substr(0,len);

            if(str1.size()%len !=0 || str2.size()%len!=0){
                continue;
            }

            int repe1 = str1.size()/len;
            int repe2 = str2.size()/len;

            string temp1 = "";
            string temp2 = "";

            for(int i =0; i< repe1 ;i++){
                temp1 += candidate;
            }

            for(int i = 0; i < repe2;i++){
                temp2 += candidate;
            }

            if(str1 == temp1 && str2 ==temp2){
                ans = candidate;
            }
        }

        return ans;
    }
};