#include <iostream>
using namespace std;


int main(){

    int  a = 0;
    const int b = 12;   // read only


    a=45;
    cout << a << endl;

    //b = 20;   access read only
    cout << b << endl;



    return 0;
}