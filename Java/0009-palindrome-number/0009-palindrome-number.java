class Solution {
    public boolean isPalindrome(int x) {
        int original=x;
        long reverse=0;

        while(x>0){
            int digit=x%10;
            reverse=(reverse*10) + digit;
            x/=10;
        }

        if(original<0){
            return false;
        }

        if(reverse==original){
            return true;
        }else{
            return false;
        }

        
    }
}