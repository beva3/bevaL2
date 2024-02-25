#include <iostream>
using namespace std;

void displayArray(int *array){
    int i = 0;
    while (!array[i]) {
        cout << i << " " << array[i] << endl;
        i++;
    }
}



int main(){
    cout << "Allocation dynamique ..." <<endl;  
    // allouer array
    int *array = new int[20];   // the default value is 0
    displayArray(array);
    delete [] array;

    return 0;
}