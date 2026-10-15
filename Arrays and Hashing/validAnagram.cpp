class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp(26, 0);

        for(char ch:s){
            mp[ch-'a']++;
        }
        for(char ch:t){
            mp[ch-'a']--;
        }
        for(int i=0;i<26;i++){
            if(mp[i]!=0){
                return false;
            }
        }
        return true;
    }
};


// Approach:
// I use a vector of size 26 to count the frequency of each lowercase letter.
// I increment the count for string s and decrement it for string t.
// If all counts are zero, both strings are anagrams.

// Time Complexity: O(n + m)
// Space Complexity: O(1)

// Interview Explanation:
// I count the frequency of each character in the first string and subtract
// the frequency of each character in the second string. If all frequencies
// become zero, both strings contain the same characters with the same
// frequencies, so they are anagrams. Otherwise, they are not.
