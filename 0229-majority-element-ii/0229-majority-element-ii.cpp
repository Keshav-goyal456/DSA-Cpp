class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();

        sort(nums.begin(), nums.end());

        int feq = 1;
        vector<int> ans;

        for (int i = 1; i < size; i++) {
            if (nums[i] == nums[i - 1]) {
                feq++;
            } else {
                if (feq > size / 3) {
                    ans.push_back(nums[i - 1]);
                }
                feq = 1;
            }
        }

        if (feq > size / 3) {
            ans.push_back(nums[size - 1]);
        }

        return ans;
    }
};