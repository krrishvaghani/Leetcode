class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_max=0,res=0;
        int i,n=nums.size();
        for (i=0;i<n;i++)
        {
            if (nums[i]==1)
                curr_max++;
            else
                curr_max=0;
            res=max(res,curr_max);
        }
        return res;
    }
};