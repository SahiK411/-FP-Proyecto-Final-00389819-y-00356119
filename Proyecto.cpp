#include <iostream>
using namespace std;
int maxHP = 20, currentHP, level = 1, gold = 0, experience = 0;

void combate(int lowerRange, int upperRange, int hp, int rewardLower, int rewardUpper, int wepID, int armID){
    while(currentHP > 0 && hp > 0){
        
    }
}

void movimiento(int currLoc, int playerMove){

}

int tienda(int wepID, int armID){

}

void nivel(){
    int func = math.floor(float(experience)/35);
    if(func == level++){
        level++;
    }
}

void enemigo(int id, int playerHP, int wepID, int armID){
    switch(id){
        case 0:
            cout << "A lesser goblin approaches.\n";
            combate(1, 6, 10, 5, 9, wepID, armID);
            break;
        case 1:
            cout << "You spot a wildcat stalking you from the foliage.\n";
            combate(4, 10, 16, 5, 15, wepID, armID);
            break;
        case 2:
            cout << "An orc charges at you, screeching.\n";
            combate(7, 16, 25, 12, 24, wepID, armID);
            break;
    }
}

int main(){
    int equipmentWeapon = 0, equipmentArmor = 0, location = 0;
    currentHP = maxHP;
}