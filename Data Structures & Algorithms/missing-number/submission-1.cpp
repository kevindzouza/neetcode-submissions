class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int l = nums.size();
        int missing = 0;
       
        for(int i=0 ; i<l; i++)
        {
            for(int j =0; j<l ; j++)
            {
            if(missing == nums[j])
            missing++;
            }
        }    
    

        return missing;
        
    }
};
