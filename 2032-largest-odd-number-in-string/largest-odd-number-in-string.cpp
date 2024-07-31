class Solution {
public:
    string largestOddNumber(string num) {
        int n= num.size();
        for(int i=n-1;i>=0;i--){
            int val = num[i]-'0';
            if(val%2==0){
                num.pop_back();
            }
            else{
                return num;
            }
        }
        // koi odd number mila hi nahi hai abhi tak toh empty string return karp
        return "";
        
    }
};