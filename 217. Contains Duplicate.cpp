class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
        unordered_map<int, int> elementCount;

        for (int num : nums) {
            if (elementCount.find(num) != elementCount.end()) {
                return true; 
            }
            elementCount[num]++;
        }

        return false; 
    }
};