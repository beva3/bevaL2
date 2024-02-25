#include <iostream>
using  namespace std;


int main(){

    int i = 0;
    int&a = i;
    a = 12;
    cout <<  "a = "<< a << " " << "i = " << i << " ,ref &a = " << &a << " &i = "<< &i<< endl;

    /*
        refference : allias
    */

    return 0;
}