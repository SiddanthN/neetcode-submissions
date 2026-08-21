class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, bool> seen_items = {};

        for(int i: nums) {

            if(seen_items.contains(i)) {

                return true;

            }

            seen_items.emplace(i, true);

        }

        return false;

    }
};