class Solution {
public:

    void allsubset(vector<int>& nums, vector<int> &ans,vector<vector<int>> &subset, int i){
        if(i==nums.size()){
            subset.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        allsubset(nums, ans, subset,i+1);

        ans.pop_back();
        allsubset(nums, ans, subset,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        vector<int>ans;

        allsubset(nums, ans, subset,0);

        return subset;
    }
};