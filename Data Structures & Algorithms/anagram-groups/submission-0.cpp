class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> orig = strs;
        unordered_map<string, vector<string>> hash;
        for(const auto &s: strs)
        {
            string st = s;
            sort(st.begin(), st.end());
            hash[st].push_back(std::move(s));
        }

        vector<vector<string>> result;
        for (auto& pair : hash) {
            result.push_back(pair.second);
        }
        return result;

        
    }
};
