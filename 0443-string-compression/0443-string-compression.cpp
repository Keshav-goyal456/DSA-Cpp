class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;

        while(i<chars.size()){

            char ch=chars[i];
            int count =0;

            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }

            chars[j]=ch;
            j++;

            if(count>1){

                string s=to_string(count);

                for(int i=0;i<s.size();i++){
                    chars[j]=s[i];
                    j++;
                }
            }
        }
    
        return j;
    }
};