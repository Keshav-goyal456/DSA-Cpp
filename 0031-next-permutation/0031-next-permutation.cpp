class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pvt=-1;

        int n=nums.size();

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pvt=i;
                break;
            } 
        }
        if(pvt==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1;i>pvt;i--){
            if(nums[i]>nums[pvt]){
                swap(nums[i], nums[pvt]);
                break;
            }
        }

        int i=pvt+1;
        int j=n-1;

        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        return;
    }
};