// Approach:
// I use an unordered_map to count the frequency of each number.
// Then, I store each number and its frequency in a max-heap.
// I extract the top k elements with the highest frequencies.

// Time Complexity: O(n + m log m)
// Space Complexity: O(m)

// Interview Explanation:
// First, I count the frequency of each number using a hash map.
// Then, I insert each number and its frequency into a max-heap.
// Since the max-heap keeps the highest frequency at the top,
// I extract the top k elements and return them.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mop;
        for(int i=0;i<nums.size();i++){
            mop[nums[i]]++;
        }

        priority_queue<pair<int,int>>hop;

        for(auto&[num,freq]:mop){
            hop.push({freq,num});
        }

        vector<int>ans;

        while(k--){
            auto[freq,num]=hop.top();
            ans.push_back(num);
            hop.pop();
        }
        return ans;
    }
};
