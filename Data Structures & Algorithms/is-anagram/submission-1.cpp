#include <numeric>
using namespace std;

class Solution {
public:
    
    unordered_map<char, int> seen_chars_list;

    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {

            return false;
            seen_chars_list.clear();

        };
        
        getCharCount(s);
        getCharCount(t, true);
        return checkDiffCount();

    }

    void getCharCount(string s, bool start_diff=false) {

        for(char c: s) {

            if(start_diff) {

                seen_chars_list[c] = seen_chars_list[c] - 1;

            } else {

                if(!seen_chars_list.contains(c)) {

                    seen_chars_list[c] = 0;

                }

                seen_chars_list[c] = seen_chars_list[c] + 1;

            }

        }

    }

    bool checkDiffCount() {

        vector<int> seen_char_counts_list;
        seen_char_counts_list.reserve(seen_chars_list.size());

        for(const auto& pair: seen_chars_list) {

            if(pair.second != 0) {

                return false;

            };

        }

        return true;

    }

};
