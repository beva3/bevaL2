 
#include <iostream>
using namespace std;

int main(){
    int a=8 ,b=0, c=0;
    try{
        if(b == 0)
            throw "zero division error";
        c = a/b;
    }catch(const char* e){
         cout << "expected accured   " << e<<endl;
    }


    return 0;
}
