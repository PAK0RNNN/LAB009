#include<iostream>
using namespace std;

void printO(int rows, int cols){
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid input";
        return;
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "O";
        }
        cout << "\n";
    }
}

int main(){
    int i, j;
    cout << "Enter number of rows: ";
    cin >> i;
    cout << "Enter number of columns: ";
    cin >> j;   
    printO(i, j);
    
    return 0;
}