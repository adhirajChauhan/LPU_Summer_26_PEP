https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};


https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while(i < j){
            int sum = numbers[i] + numbers[j];

            if(sum == target){
                return {i + 1, j + 1};
            }

            else if(sum < target) i++;
            else j--;
        }
        return {};

    }
};


https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else{
                int profit = prices[i] - minPrice;
                if(profit > maxProfit) maxProfit = profit;
            }
        }
        return maxProfit;
    }
};

https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < arr.size() - 2; i++){
            int j = i + 1;
            int k = arr.size() - 1;
            
            while(j < k){
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target) return true;
                else if(sum<target) j++;
                else k--;
            }
        }
        return false;
    }
};


https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m -1;
        int j = n - 1;
        int k = m + n - 1;

        while(j >= 0){
            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
    }
};



















