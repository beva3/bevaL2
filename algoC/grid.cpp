#include <iostream>
using namespace std;

typedef struct Size{
    int x;
    int y;
} Size;

void dislayGrid(int** grid, Size size);

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
