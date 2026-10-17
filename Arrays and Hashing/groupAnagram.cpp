// Approach:
// I use an unordered_map where the sorted string acts as the key
// and the original anagrams are stored as values in a vector.
// Strings with the same sorted characters belong to the same group.

// Time Complexity: O(n * k log k)
// Space Complexity: O(n * k)

// Interview Explanation:
// I sort each string to get a common key for all its anagrams.
// I use this sorted string as the key in a hash map and store
// the original string in its corresponding group. Finally, I
// collect all the groups from the map and return the result.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto str:strs){
            string temp = str;
            sort(str.begin(), str.end());
            if(mp.find(str) != mp.end()){
                mp[str].push_back(temp);
            }
            else{
                mp[str].push_back(temp);
            }
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
