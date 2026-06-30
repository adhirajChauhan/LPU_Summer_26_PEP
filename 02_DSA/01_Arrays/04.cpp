#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int s = 0, e = size - 1;

    while(s <=e){
        int mid = (s + e)/2;

        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) s = mid + 1;

        else e = mid - 1;
    }
    return -1;
}
 
int main()
{
 int arr[] = {1,2,3,4,5,6,7,8,9,10};
}