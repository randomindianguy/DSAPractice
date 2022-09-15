class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> res;
            unordered_map<string, vector<string>>mp;
            for(auto str: strs){
                string sorted = str;
                sort(sorted.begin(), sorted.end());
                mp[sorted].push_back(str);
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            res.push_back(i->second);
        }
        return res;
    }
};