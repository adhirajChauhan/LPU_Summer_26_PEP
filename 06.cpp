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


https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int pivot = 0;
        int n = arr.size();
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                pivot = i + 1;
                break;
            }
        }
        int i = pivot;
        int j = (pivot - 1 + n) % n;
        
        while( i != j){
            int sum = arr[i] + arr[j];
            if(sum == target) return true;
            
            else if(sum < target){
                i = (i + 1) % n;
            }
            else{
                j = (j - 1 + n) % n;
            }
        }
        return false;
    }
};


https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int firstOccurance(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;

        while(left <= right){
            int mid = (left + right)/2;

            if(nums[mid] == target){

            }
            else if(nums[mid] < target){

            }
            else{
                
            }
        }
    }

    int lastOccurance(vector<int> &nums, int target){
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
    }
};


https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1


class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        
        int ans = -1;
        
        while(left <= right){
            int mid = (left + right)/2;
            
            if(arr[mid] == x){
                ans = mid;
                left = mid + 1;
            }
            else if(arr[mid] < x){
                ans = mid;
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return ans;
        
    }
};














