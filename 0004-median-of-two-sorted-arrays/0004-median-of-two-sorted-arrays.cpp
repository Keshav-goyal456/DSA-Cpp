class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();

        int nums3[n1+n2];

        int i=0,j=0,k=0;

        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                nums3[k]=nums1[i];
                i++;
            }else{
                nums3[k]=nums2[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            nums3[k]=nums1[i];
            i++;
            k++;
        }

        while(j<n2) {
            nums3[k]=nums2[j];
            j++;
            k++;
        }
        int n=n1+n2;

        if(n%2==0){
            return (nums3[(n/2)-1] + nums3[n/2])/2.0;
        }else {
            return nums3[n/2];
        }
    }
};