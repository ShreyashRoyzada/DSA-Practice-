class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        for(int k = 0; k<nums.size(); k++)
        {
            if(i != nums[k])
            {
                return i;
            }
            i++;
        }
        return i;
    }
};
