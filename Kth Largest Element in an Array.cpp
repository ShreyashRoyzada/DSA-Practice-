class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      vector<int> answer;
      int max = INT_MIN, max_in = 0;
      bool ch = false;
      if(k == nums.size())
      {
        k--;
        ch = true;
      }
      while(k)
      {
      for(int i = 0;i<nums.size();i++)
      {
        if(nums[i]>max)
        {
          max = nums[i];
          max_in = i;
        }
      }
      answer.push_back(max);
      nums.erase(nums.begin()+max_in);
      max = INT_MIN;
      k--;
      }
      
      if(ch)
      {
        answer.push_back(nums[0]);
      }
        // cout<< answer[0]<<" "<<answer[1];
      return answer[answer.size()-1];
    }
};
