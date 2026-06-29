class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();

        int currsum=0;
        int maxsum=INT_MIN;
        for(int i=0; i<size;i++){
            currsum+=nums[i];
            maxsum=max(currsum, maxsum);

            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};