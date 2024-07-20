class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int right=nums.size()-1;
        int left = 0;
        while(left<right){
            int mid = left + (right - left) / 2;
            if(nums[mid]<nums[mid+1]){
                //peak right me hai
                left= mid+1;
            }
            else{
                right=mid;
            }


        }
        return left;
    }
};