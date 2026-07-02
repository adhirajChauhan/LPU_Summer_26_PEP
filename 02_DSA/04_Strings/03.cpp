https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<bool> seen(256, false);
        
        string ans = "";
        
        for(char ch : s){
            if(!seen[ch]){
                ans += ch;
                seen[ch] = true;
            }
        }
        return ans;
    }
};


https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int arr[26] = {0};

        for(char i : s){
            arr[i - 'a']++;
        }

        for(char i : t){
            arr[i - 'a']--;
            if(arr[i - 'a'] < 0) return false;
        }
        return true;
    }
};


https://leetcode.com/problems/valid-palindrome-ii/


class Solution {
public:
    bool palindromeHelper(string &s, int left, int right){
        while(left < right){
            if(s[left++] != s[right--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
       int left = 0, right = s.length() - 1;

        while(left < right){
            if(s[left] == s[right]){
                // if the value on both pointer are equal them simply move the pointer
                left++;
                right--;
            }
            else{
                return palindromeHelper(s, left + 1, right) || palindromeHelper(s, left, right - 1);
            }
        }
        return true;
    }
};


https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
         int j = 0;

         while(i < s.length() && j < t.length()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
         }
         return (i == s.length());
    }
};


https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        
        vector<bool> seen(256, false);
        // string ans  = "";
        for(char i : s){
            if(seen[i]){
                // ans += i;
                return {i};
            }
            seen[i] = true;
        }
        return "-1";
    }
};

https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/


class Solution {
public:
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u';
    }
    int maxVowels(string s, int k) {
        int count = 0;

        //first window
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])){
                count++;
            }
        }

        int maxCount = count;

        for(int i = k; i < s.size(); i++){
            if(isVowel(s[i-k])){
                count--;
            }
            if(isVowel(s[i])){
                count++;
            }
            maxCount = max(maxCount, count);
        }
        return ans;
    }
};

https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLength = IMT_MAX;

        for(int right = 0; right < nums.length(); right++){
            sum += nums[right];

            while(sum >= target){
                minLength = min (minLength, right - left + 1);

                sum -= nums[left];
                left++;
            }
        }
        return (minLength == INT_MAX) ? 0 : minLength;
    }
};