class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        int prefixsum=0;
        int count=0;

        unordered_map<int,int> m;
        m[0] = 1;

        for(int i=0;i<n;i++){

            prefixsum+=nums[i];

            if(m.find(prefixsum-k) != m.end()){
                count+=m[prefixsum-k];
            }

            m[prefixsum]++;
        }

        return count;
    }
};




// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n=nums.size();

//         int count=0;

//         for(int i=0;i<n;i++){
//             int sum=0;

//             for(int j=i;j<n;j++){
//                 sum+=nums[j];

//                 if(sum==k){ 
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };