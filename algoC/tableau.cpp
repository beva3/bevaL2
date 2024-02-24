#include <iostream>
#include <iterator>
void displayTab(int table[11]){
    for(int i = 0 ; i <= 10  ; i++){
        std::cout << table[i] << std::endl;
    }
}
void computTable(int n, int table[11]){
    for(int i = 0; i < 11 ; i++){
        table[i] = i * n;
    }
}
int main(){
    int table[11]={0};
    displayTab(table);
    computTable(5, table);
    displayTab(table);
    
    return 0;
}