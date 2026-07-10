#include<iostream>
#include<stack>
using namespace std;
 
int main()
{
    stack<int> st;

    st.push(5);
    st.push(15);
    st.push(25);

    cout << "top element : " << st.top() << endl;
    st.pop();

    cout << "top element : " << st.top() << endl;

}