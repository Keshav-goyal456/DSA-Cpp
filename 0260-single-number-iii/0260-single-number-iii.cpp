class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(), nums.end());

        int first, second;

        for(int i=0;i<n;i+=2){
            if(nums[i]!=nums[i+1]){
                first=nums[i];
                break;
            }
        }
        for(int i=n-1;i>0;i-=2){
            if(nums[i]!=nums[i-1]){
                second=nums[i];
                break;
            }
        }
        return {first, second};
    }
};