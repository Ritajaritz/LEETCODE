class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};

        if (nums.empty()) {
            return result;
        }

        result[0] = findFirstPosition(nums, target);  // Find the first occurrence
        result[1] = findLastPosition(nums, target);   // Find the last occurrence

        return result;
    }

private:
    int findFirstPosition(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int result = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                result = mid;
                e = mid - 1; // Move left to find the first occurrence
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return result;
    }

    int findLastPosition(const vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int result = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                result = mid;
                s = mid + 1; // Move right to find the last occurrence
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return result;
    }
};