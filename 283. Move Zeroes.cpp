class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int>v;
        for(int i=0; i<nums.size(); i++)
        {
          if(nums[i]!=0) v.push_back(nums[i]);
        }

        int nz=v.size();
        for(int i=0; i<nz; i++)
        {
            nums[i]=v[i];
        }

        for(int i=nz; i<nums.size(); i++)
        {
            nums[i]=0;
        }

    }
};