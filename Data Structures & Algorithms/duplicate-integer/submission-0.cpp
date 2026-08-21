class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        if(nums.empty()) {

            return false;

        }

        unordered_set<int> seen;

        for (int n : nums) {
            if (seen.contains(n)) {
                return true;
            }
            seen.insert(n);
        }
        return false;
    }
};