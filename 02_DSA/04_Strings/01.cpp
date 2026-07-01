#include<iostream>
using namespace std;
 
int main()
{
 
    // char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    string str1 = "Hello";
    string str2 = "hello";

    if(str1 == str2) cout << "Same" << endl;
    else cout << "Not same" << endl;

    cout << str1.length()<<endl;
}