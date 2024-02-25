#include <cstring>
#include <iostream>
using namespace std;

int main(){
    
    //char* pStr = "hello world"; // interdi
    char* pStr = nullptr;
    pStr = new char[20];

    //strcpy(pStr, "hello");
    for(int i = 0 ; i < 20 ; i++){
        pStr[i] = 'q';
    }

    cout << pStr << endl;

    delete [] pStr;

    return 0;
}