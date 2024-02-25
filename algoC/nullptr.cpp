#include <iostream>

void initialise(int *tabInt, int size){
    for(int i = 0 ; i < size ; i++){
        tabInt[i] = i;
    }
}

void allouArray(int *array, int size){
    array = new int[size];
}

void displayArray(int *array){
    int i = 0;
    while (array[i]) {
        std::cout << array[i] << std::endl; 
        i++;
    }
}



int main(){
    int *ptr = nullptr;//pointeur sur int
    std::cout << ptr << std::endl;
   
    //std::cout << *ptr << std::endl; // segmentation fault  satria pas d'allocation
    
    

    return 0;
}