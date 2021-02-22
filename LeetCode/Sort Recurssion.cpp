class Solution {
public:
    vector<int> res;
    void sort(vector<int> arr)
    {
        if(arr.size() == 1)
        {
            res.push_back(arr[0]);
            return;
        }
        
        
        auto itr = max_element(arr.begin(),arr.end());
        int m = *itr;
        arr.erase(itr);
        sort(arr);
        res.push_back(m);
    }
    vector<int> sortArray(vector<int>& nums) {
        sort(nums);
        return res;
    }
};
