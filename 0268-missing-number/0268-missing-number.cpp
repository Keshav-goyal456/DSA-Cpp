class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR=nums.size();

        for(int i=0;i<nums.size();i++){
            XOR^=i;
            XOR^=nums[i];
        }

        return XOR;
    }
};