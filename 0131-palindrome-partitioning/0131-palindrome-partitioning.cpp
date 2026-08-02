class Solution {
public:

    bool ispalin(string s){
        string s2= s;
        reverse(s2.begin(), s2.end());

        if(s==s2){
            return true;
        }
        return false;
    }

    void getpart(string s, vector<string> &partition, vector<vector<string>> &ans){
        int n=s.size();

        if(s.size()==0){
            ans.push_back(partition);
            return;
        }

        for(int i=0;i<n;i++){

            string part=s.substr(0, i+1);

            if(ispalin(part)){
                partition.push_back(part);
                getpart(s.substr(i+1), partition, ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;

        getpart(s, partition, ans);

        return ans;
    }
};