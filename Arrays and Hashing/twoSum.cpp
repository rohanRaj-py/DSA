// Approach:
// I store each element and its index in an unordered_map.
// Then, for each element, I calculate its complement (target - nums[i]).
// If the complement exists at a different index, I return both indices.

// Time Complexity: O(n) average
// Space Complexity: O(n)

// Interview Explanation:
// I use a hash map to store each element and its index. For every element,
// I calculate the complement needed to reach the target. If the complement
// exists at a different index, I return the two indices. This avoids using
// two nested loops and improves the average time complexity to O(n).

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++){
            int comp = target - nums[i];
            if((mp.find(comp) != mp.end()) && (mp[comp] != i)){
                return {mp[comp], i};
            }
        }
        return {-1, -1};
    }
};
