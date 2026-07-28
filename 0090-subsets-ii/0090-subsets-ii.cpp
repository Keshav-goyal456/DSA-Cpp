class Solution {
public:

    void allsubset(vector<int> &nums, vector<int> ans, vector<vector<int>> &subset, int i){
        if(i==nums.size()){
            subset.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        allsubset(nums, ans, subset, i+1);

        ans.pop_back();
        
        int idx=i+1;
        while(idx<nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }
        allsubset(nums, ans, subset, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> subset;
        vector<int> ans;

        allsubset(nums, ans, subset, 0);

        return subset;

    }
};