class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        int len = nums.size();
        int c = 0;
        for(int i = 0; i<len ; i++)
        {
            for(int j = i+1; j<len; j++)
            {
                if(nums[i]==nums[j])
                c++;
            }
        }

        if(c>0)
        return true;
        else 
        return false;
        
    }
};