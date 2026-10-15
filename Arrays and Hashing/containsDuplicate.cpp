// Approach:
// I use an unordered_map to count the frequency of each element.
// If any element appears more than once, I return true.
// Otherwise, I return false.

// Time Complexity: O(n) average
// Space Complexity: O(n)

// Interview Explanation:
// I traverse the array and store the frequency of each element in a hash map.
// If any element appears more than once, I return true. If no duplicates
// are found, I return false.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second > 1){
                return true;
            }

        }
        return false;
    }
};
