// Approach:
// I use two arrays, prefix and suffix, to store the product of
// elements to the left and right of each index.
// I multiply the prefix and suffix values to get the result.

// Time Complexity: O(n)
// Space Complexity: O(n)

// Interview Explanation:
// First, I calculate the prefix product for each index, excluding
// the current element. Then, I calculate the suffix product in the
// same way. Finally, I multiply both products to get the answer
// for each index without using division.


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> prefix(n,1);
        vector<int> suffix(n, 1);

        for(int index = 1;index<n;index++){
            prefix[index] = prefix[index-1] * nums[index-1];
        }

        for(int index = n-2;index>=0;index--){
            suffix[index] = suffix[index+1] * nums[index+1];
        }
        for(int index = 0;index<n;index++){
            ans[index] = prefix[index] * suffix[index];
        }
        return ans;
    }
};
