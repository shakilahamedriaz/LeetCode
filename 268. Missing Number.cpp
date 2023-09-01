class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //sum of first n numbes
        int n = nums.size();
        int sum=(n*(n+1))/2;
        //sum of total given array:
        int sum2=0;
        for(int i=0; i<n; i++)
        {
            sum2+=nums[i];
        }

        int ans=sum-sum2;
        return ans;
    }
};