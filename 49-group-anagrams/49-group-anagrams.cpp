class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> res; //result vector
            unordered_map<string, vector<string>>mp; //unordered map that will store string
            for(auto str: strs){
                string sorted = str; //this will be the key to the hashmap that we are creating as we are mapping all that match with the sorted string to that key.
                sort(sorted.begin(), sorted.end()); //sorted string as key
                mp[sorted].push_back(str); //for every sorted key, we are pushing an iterated value in strs.
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            res.push_back(i->second); //we are pushing all those values that are related to the sorted index.
        }
        return res;
    }
};

//TC: O(M*NlogN);