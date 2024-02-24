#include <cstdlib>
#include <iostream>
#include <iterator>
#include <ostream>
#include <ctime>


int main(){
//   int mysteryNumber = 75;
    std::srand(time(nullptr));
   int mysteryNumber = std::rand() % 100;
   std::cout << "MysteryNumber = " << mysteryNumber << std::endl;
   int maxTry = 6;
   int number = 0;

   for(int i = 0 ; i < maxTry ; i++){
        std::cout << "Entrez le nombre entre 0 et 100 " ;
        std::cin >> number ;
        std::cin.ignore();
        
        if(mysteryNumber == number ){
            std::cout << "Bravo" << std::endl;
            break;
        }
        else if (number > mysteryNumber) {
            std::cout << "trop grand"<<std::endl;
        }else {
            std::cout << "Trop Petit" << std::endl;
        }

        if(i == maxTry - 1){
            std::cout << "Echouer !!" << std::endl;
        }
   }

    return 0;
}