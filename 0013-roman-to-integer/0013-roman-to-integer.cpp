class Solution {
public:
    int romanToInt(string s) {
        
        int total = 0;
        for(int i = 0; i <s.size();i++)
        {
            switch(s[i]){
            case  'I': 
                if(i+1<s.size()&& s[i+1]=='V')
                    total += 4;
                else if(i+1<s.size()&& s[i+1]=='X')
                    total += 9;
                else
                    total +=1;
                break;
            case  'V':
                if(i==0||s[i-1] != 'I')
                    total +=5;
                break;
            case 'X' :
                if( i+1<s.size()&& s[i+1]=='L')
                    total += 40;
                else if( i+1<s.size()&&s[i+1]=='C')
                    total += 90;
                else if(i==0||s[i-1] != 'I')
                    total +=10;
                break;
            case 'L' :
                if(i==0||s[i-1] != 'X')
                total += 50;
                break;
            case 'C' :
                if( i+1 < s.size()&& s[i+1]=='D')
                    total += 400;
                else if(i+1 <s.size()&& s[i+1]=='M')
                    total += 900;
                else if(i==0||s[i-1] != 'X')
                      total +=100;
                break;
            case 'D':
                if(i==0|| s[i-1] != 'C')
                total += 500;
                break;
            case 'M':
                if(i==0||s[i-1] != 'C')
                total +=1000;
                break;
        }}

        return total;
    }
};