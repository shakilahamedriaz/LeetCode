class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int len= nums.size();
        
        next_permutation(nums.begin(), nums.end());

        for(auto i: nums)
        {
          cout<<i<< " ";
        }
    }
};