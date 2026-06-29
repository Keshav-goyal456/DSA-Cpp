class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int original=x;

        while(x>0){
            int dig=x%10;
            reverse=(reverse*10) + dig;
            x/=10;
        }

        if(original<0){
            return false;

        } else {
            if(reverse==original){
                return true;
            } else{
                return false;
            }
        }
    }
};