class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n=nums.size();

        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
    }
};



// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int n=nums.size();

//         int maximum=INT_MIN;

//         int multi=0;

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){

//                     multi=nums[i]*nums[j]*nums[k];

//                     maximum=max(maximum, multi);
//                 }
//             }
//         }

//         return maximum;
//     }
// };