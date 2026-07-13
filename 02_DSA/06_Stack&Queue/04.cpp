#include<iostream>
#include<stack>
using namespace std;
 
 void reverseString(string str){
    stack<string> st;

    for(int i = 0; i < str.length(); i++){
        string ans = "";
        while(str[i] != ' '){
            ans += str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
 }
int main()
{
 
}


https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(ch == '(' || ch =='{' || ch == '['){
                st.push(ch);
            }
            else{
                if(st.empty()) return false;

                char top = st.top();
                if(ch == ')' && top == '(' ||ch == '}' && top == '{' ||ch == ']' && top == '['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};


https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        //base case
        if(st.empty()){
            st.push(x);
            return st;
        }
        int topVal = st.top();
        st.pop();
        st = insertAtBottom(st, x);
        st.push(topVal);
        
        return st;
        
    }
};


https://www.geeksforgeeks.org/problems/queue-reversal/1

class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        if(q.empty()) return;
        
        int temp = q.front();
        q.pop();
        reverseQueue(q);
        q.push(temp;)
        
        
    }
};


https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> ast;
        
        if(k > q.size()) return q;
        //run a loop for k elements and push them in stack
        for(int i = 0; i < k; i++){
            st.push(q.front());
            q.pop();
        }
        //run a loop until st is empty and push all the elements back in queue
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        //run a loop till size - k, pop all the elements of queue and push them back in queue again
        for(int i = 0; i < q.size() - k; i++){
            q.push(q.front());
            q.pop();
        }
        return q;
        
    }
};