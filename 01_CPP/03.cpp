#include<iostream>
using namespace std;
 
 void doubleTheNumber(int &num){
    num *= 2;
    cout << "inside the function : " << num << endl;
 }

int main()
{
  int num = 10;

  doubleTheNumber(num);

  cout << " Outside the function : " << num << endl;
}