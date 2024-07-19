class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        if (nums.empty()) {
            return ans;
        }

        ans[0] = findFirst(nums, target);  //first occurrence
        ans[1] = findLast(nums, target);   //last occurrence

        return ans;
    }

private:
    int findFirst(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1; 
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }

    int findLast(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return ans;
    }
};