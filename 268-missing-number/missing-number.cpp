// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//     int expectedSum = n * (n + 1) / 2;
//     int actualSum = 0;

//     for (int i = 0; i < n; ++i) {
//         actualSum += nums[i];
//     }

//     return expectedSum - actualSum;
// }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i <= n; ++i) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                return i;
            }
        }
        
        return -1; // This line should never be reached in a valid input scenario
    }
};
