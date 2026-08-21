class Solution {

public:

    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) {

            return false;

        }  

        unordered_map<char, int> freq_map;

        for(int i = 0; i < s.length(); i++) {

            // Adding to the frequency map for the first string

            freq_map[s[i]]++;

            // Subtracting from the frequency map for the second string

            freq_map[t[i]]--;

        }

        // The end result if both the strings form an anagram? if all the values in the frequency map are zero, then they are anagrams.

        for(auto& pair : freq_map) {

            if(pair.second != 0) {

                return false;

            }

        }

        return true;

    }

};
