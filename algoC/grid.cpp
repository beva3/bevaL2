#include <iostream>
using namespace std;

typedef struct Size{
    int x;
    int y;
} Size;

void dislayGrid(int** grid, Size size);
void defaulteValue(int** grid, Size size , int value);

int main(){
    int x = 5, y = 5;
    int** grid = new int*[y];

    for(int i = 0 ; i< y ; i++){
        grid[i] = new int[x];
    }
    /*
        par defaut tous sont 0
    */
    dislayGrid(grid, {5,5});

    cout << "defaulte value with 3 ...." << endl ;

    defaulteValue(grid, {5,5}, 3);
    dislayGrid(grid, {5,5});

    
    for(int i = 0 ; i< y ; i++){
        delete[] grid[i];
    }
    delete [] grid;
    
    return 0;
}

void dislayGrid(int** grid, Size size){
    for (int i = 0 ; i < size.y; i++) {
        for (int j = 0 ; j < size.x; j++) {
            cout << grid[i][j] << " " ;
        }
        cout << endl;
    }
}
void defaulteValue(int** grid, Size size , int value){    
    for (int i = 0 ; i < size.y; i++) {
        for (int j = 0 ; j < size.x; j++) {
            grid[i][j]  = value ;
        }
    }
}