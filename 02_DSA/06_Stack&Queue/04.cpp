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