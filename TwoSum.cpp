class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        vector<int> res;
        size_t len = nums.size();
        int current = 0;
        for (int i = 0; i < len; i++)
        {   
            current = target - nums[i];
            if(hash.find(current) != hash.end())
            {
                for(int j = 0; j < len; j++)
                    if(current == nums[j])
                    {
                        res.push_back(j);
                        res.push_back(i);
                        return res;                  
                    }
            }
            else
                hash[nums[i]] = i;
        }
          return res;                  
    }
};