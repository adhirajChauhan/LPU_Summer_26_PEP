https://www.geeksforgeeks.org/problems/reverse-an-array/1#

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int j = arr.size()-1;
        
        while(i < j){
            swap(arr[i++], arr[j--]);
            
        }
    }
};



https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for( int i = 0 ; i < arr.size()-1; i++){
            if(arr[i] > arr[i + 1]){
                return false;
            }
        }
        return true;
    }
};



https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        //largest = INT_MIN
        //run a loop on size of array{
            //if(the ith element is greater than largest){
                //update the largest
            // }
            //return largest
        }
        
    }
};



https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN, s_largest = INT_MIN;
        
        for(int i : arr){
            if(i > largest){
                s_largest = largest;
                largest = i;
            }
            else if(i > s_largest && i < largest){
                s_largest = i;
            }
        }
        
        return s_largest == INT_MIN ? -1 : s_largest;
    }
};



https://leetcode.com/problems/max-consecutive-ones/submissions/2044085547/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;

        for(int i : nums){
            if(i == 1){
                count++;
                maxCount = max(maxCount, count);
    
            }
            else{
                count = 0;
            }
        }
        return maxCount;
    }
};


// int arr[] = {3,5,1,12,36,32,4}; key = 12
// find they key in array using linear search,
// if the key is found and value of key is > 10, 
// then return double the value of key,
// otherwise return the half value of key
 