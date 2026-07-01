#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i = 0; i < 3; i++){
        for(int j  = 0; j < 3; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
        return false;
    }
}
 
//for a given 2d array, create a method that will calculate and print the sum of each row
//print the value of max sum and its row index also
//if multiple rows have max sum, print the index of last row

void findSUm(int arr[][3], int row, int col){
    for(int i = 0; i < 3; i++){
        int sum  = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout << sum  << endl;
    }
}


void wavePrint(int arr[][3], int row, int col){
    for(int c = 0; c < 3; c++){
        if(c%2 == 0){
            for(int r = 0; r < 3; r++){
                cout << arr[r][c] << " ";
            }
        }
        else{
            for(int r = 2; r >= 0; r--){
                cout << arr[r][c] << " ";
            }
        }
    }
}

void spiralPrint(int arr[][3], int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col -1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        //Print right col
        for(int i = topRow; i<= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        //print bottom row
    for(int i = rightCol; i >= leftCol; i--){
        cout << arr[bottomRow][i] << " ";
    }
    bottomRow--;
        //print left col
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;

    }
}
int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    isPresent(arr, 5, 3,3);
}