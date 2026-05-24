#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> count;
        for (char c : s) count[c]++;
        for (char c : t) count[c]--;
        for (auto pair : count) {
            if (pair.second != 0) return false;
        }
        return true;
    }
};
