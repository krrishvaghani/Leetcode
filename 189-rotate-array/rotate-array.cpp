class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n

        vector<int> result;

        for (int i = n - k; i < n; i++) {
            result.push_back(nums[i]);
        }
        for (int i = 0; i < n - k; i++) {
            result.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=result[i];
        }
        return nums;
    }
};
