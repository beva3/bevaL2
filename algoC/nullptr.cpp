#include <iostream>

void initialise(int *tabInt, int size){
    for(int i = 0 ; i < size ; i++){
        tabInt[i] = i;
    }
}

void allouArray(int *array, int size){
    array = new int[size];
}

void  initArray(int *array , int value){
    array[0] = value;
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
    int a = 12;
    std::cout << ptr << std::endl;
    ptr = &a;

    //std::cout << *ptr << std::endl;   // segmentation fault  satria pas d'allocation
    std::cout << "ptr = "<<ptr << std::endl;      // display the adress of a
    std::cout << "a   = "<<&a << std::endl;      // display the adress of a
    std::cout << "*ptr= " <<*ptr << std::endl;     // display the value of a
    std::cout << "*a  = " <<a << std::endl;     // display the value of a
    
 
    return 0;
}