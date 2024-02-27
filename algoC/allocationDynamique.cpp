#include <iostream>
using namespace std;

void displayArray(int *array){
    int i = 0;
    while (array[i]) {
        cout << i << " " << array[i] << endl;
        i++;
    }
}

void initArray(int *array, int defauleValue){    
    int i = 0;
    while(array[i]) {
        array[i] = defauleValue;
        i++;
    }
}



int main(){
    cout << "Allocation dynamique ..." <<endl;  
    // allouer array
    int *array = new int[20];   // the default value is 0
    displayArray(array);

    cout << "init array ..." << endl;

    initArray(array, 6);
    displayArray(array);
    //cout << array[8] << endl;
    delete [] array;

    return 0;
}