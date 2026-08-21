class Solution {

public:

    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> num_idx_mapping;

        for(int i = 0; i < nums.size(); i++) {

            // Firstly, a single pass throught the entire input array to regsiter all elements and their indexes into the map memory. 

            num_idx_mapping[nums[i]] = i;

        }

        for(int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];
            
            // Secondly, check if the complement of the current element is present in the map memory.

            if(num_idx_mapping.contains(complement) && num_idx_mapping[complement] != i) {
    
                if(num_idx_mapping[complement] <= i) {

                    return {num_idx_mapping[complement], i};

                }

                return {i, num_idx_mapping[complement]};
    
            }

        }

        return vector<int> {}; // Default return value if no solution is found.

    } 

};