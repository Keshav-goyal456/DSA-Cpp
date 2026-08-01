class Solution {
public:

    void combsum(vector<int>& arr,int idx,int target,vector<vector<int>> &ans2, vector<int> &ans1){

         if(target==0){
            ans2.push_back(ans1);
            return;
        }

        if(idx==arr.size() || target<0){
            return;
        }
        
        ans1.push_back(arr[idx]);
        //multiple
        combsum(arr,idx,target-arr[idx], ans2, ans1);
        //none
        ans1.pop_back();
        combsum(arr,idx+1,target, ans2, ans1);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans2;
        vector<int> ans1;

        combsum(arr,0,target, ans2, ans1);
        return ans2;
    }
};