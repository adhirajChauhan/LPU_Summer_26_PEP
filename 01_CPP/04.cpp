#include<iostream>
using namespace std;
 
int main()
{
int a = 10;
int *ptr = &a; 

cout << a << endl;
cout << &a << endl;

cout << ptr << endl;
cout << *ptr << endl;

cout << *(ptr+1) << endl;
cout << *ptr + 1 << endl;


}