class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int currMax=nums[0],currMin=nums[0],ans=nums[0];

        for(int i=1;i<n;i++){

            int temp = currMax;

            currMax=max({nums[i], temp * nums[i], currMin * nums[i] } );

            currMin=min({nums[i], temp * nums[i], currMin * nums[i] } );

            ans=max(currMax, ans);
        }

        return ans;
    }
};