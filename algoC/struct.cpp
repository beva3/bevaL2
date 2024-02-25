#include <iostream>
#include <string>
using namespace std;

struct Player{
    string name;
    int health;

    // methode
    bool isDead();
    void attac(Player& otherPlayer);
};

bool Player::isDead(){
    return health > 0;
}
void Player::attac(Player& otherPlayer){
    otherPlayer.health -= 2;
}

int  main(){

    Player p1 = {"raphael", 5};
    Player p2 = {"gabriel", 1};

    if(p1.isDead()){
        cout << "The player " << p1.name << " is't dead" << endl;
    }

    p1.attac(p2);
    cout << p2.health << endl;
    if(!p2.isDead()){
        cout << "The player " << p2.name << " is dead" << endl;
    }

    return 0;
}