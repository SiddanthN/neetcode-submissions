class Solution {
public:

    string generate_freq_hash(vector<int>& freq_arr) {

        string freq_arr_hash = "#";

        for(int cnt: freq_arr) {

            freq_arr_hash += to_string(cnt) + "#";

        }

        return freq_arr_hash;

    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagram_hash_map{};
        vector<vector<string>> result{};

        for(const string& str: strs) {

            vector<int> freq_arr(26, 0);

            for(char c: str) {

                freq_arr[c - 'a']++;

            }

            string freq_hash = generate_freq_hash(freq_arr);
            anagram_hash_map[freq_hash].emplace_back(str);

        }

        for(auto& pair: anagram_hash_map) {

            result.emplace_back(move(pair.second));

        }

        return result;

    }

};
