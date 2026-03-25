class Solution {
    public int romanToInt(String s) {
        int ans=0,tmp =0;
        int[] as= new int[s.length()];
        char[] arr = s.toCharArray();

        for(int i =0;i < s.length();i++){
            switch(arr[i]){
            case 'I' :
                as[i] = 1;
                break;
            case 'V' :
                as[i] =5;
                break;
            case 'X' :
                as[i] =10;
                break;
            case 'L' :
                as[i] =50;
                break;
            case 'C' :
                as[i] =100;
                break;
            case 'D' :
                as[i] =500;
                break;
            case 'M' :
                 as[i] = 1000;
                break;
                }
        }
        for(int i =0;i < s.length();i++){
        switch(arr[i]){
            case 'I' :
                ans += 1;
                tmp = 1;
                break;
            case 'V' :
                ans += 5;
                tmp =5;
                break;
            case 'X' :
                ans += 10;
                tmp =10;
                break;
            case 'L' :
                ans += 50;
                tmp =50;
                break;
            case 'C' :
                ans += 100;
                tmp = 100;
                break;
            case 'D' :
                ans += 500;
                tmp =500;
                break;
            case 'M' :
                ans += 1000;
                tmp =1000;
                break;
        }
        if(i+1<s.length()&&as[i]<as[i+1])
        {
            ans -= tmp*2;
        }
        }
        return ans;
    }
}