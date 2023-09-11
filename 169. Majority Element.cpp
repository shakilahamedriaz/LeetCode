#include <bits/stdc++.h>

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate=nums[0];
        int cnt=1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==candidate)
            {
              cnt++;
            }
            else 
            {
              cnt--;
              if(cnt==0)
              {
                candidate=nums[i];
                cnt=1;
              }
            }
        }
        return candidate;
    }
};
