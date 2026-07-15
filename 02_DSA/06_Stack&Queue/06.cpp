https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i] = -1;
            }
            else{
                nge[i] = st.top();
            }
            st.push(arr[i]);
        }
        return nge;
        
    }
};




https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> left(n);
        vector<int> right(n);

        //find the previous smaller
        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = -1;
            }
            else{
                left[i] = st.top();
            }
            st.push(i);
        }

        while(!st.empty()) st.pop();

        //find next smaller
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = n;
            }
            else{
                right[i] = st.top();
            }
            st.push(i);
        }

        //calculate  max area
        int maxArea = 0;
        for(int i = 0; i < n; i++){
            int height = heights[i];
            int width = right[i] - left[i] - 1;
            int area = height * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};