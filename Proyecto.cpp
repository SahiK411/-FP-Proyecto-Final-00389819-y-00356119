#include <iostream>
using namespace std;
int maxHP = 20, currentHP, level = 1, gold = 0, experience = 0, equipmentWeapon = 0, equipmentArmor = 0;

void combate(int lowerRange, int upperRange, int hp, int rewardLower, int rewardUpper, int wepID, int armID){
    //Funcion que manejara el combate del juego.
    while(currentHP > 0 && hp > 0){
        
    }
}

void movimiento(int currLoc, int playerMove){

}

int menu(int options, string option1, string option2, string option3, string option4, string option5){
    int playerOption = 0; //Funcion para un menu reutilizable
    switch options{
        case 1:
            cout << "\t1- " << option1 << endl;
            cin >> playerOption;
            break;
        case 2:
            cout << "\t1- " << option1 << endl;
            cout << "\t2- " << option2 << endl;
            cin >> playerOption;
            break;
        case 3:
            cout << "\t1- " << option1 << endl;
            cout << "\t2- " << option2 << endl;
            cout << "\t3- " << option3 << endl;
            cin >> playerOption;
            break;
        case 4:
            cout << "\t1- " << option1 << endl;
            cout << "\t2- " << option2 << endl;
            cout << "\t3- " << option3 << endl;
            cout << "\t4- " << option4 << endl;
            cin >> playerOption;
            break;
        case 5:
            cout << "\t1- " << option1 << endl;
            cout << "\t2- " << option2 << endl;
            cout << "\t3- " << option3 << endl;
            cout << "\t4- " << option4 << endl;
            cout << "\t5- " << option5 << endl;
            cin >> playerOption;
        default:
            break;
    }
    return playerOption;
}

void tienda(){
    int x = 1, y; //Funcion para cambiar el arma y armadura del jugador mediante compras.
    string z;
    cout << "You enter the store, various wares divided roughly into two different stalls.\n";
    cout << "You can exit using '0'.\n"
    while x != 0{
        x = menu(2, "Purchase weapons.", "Purchase armor.");
        switch (x){
            case 1:
                cout << "You walk towards their weapon selection, browsing for anything that catches your eye.\n";
                cout << "You can exit using '0'.\n"
                y = menu(5, "Training Sword - 20 gold" , "Rusty Halberd - 35 gold", "Silver Rapier - 40 gold", "Steel Broadsword - 50 gold", "Diamond-tipped Spear - 70 gold");
                switch (y){
                    case 1:
                        cout << "A small, brand-new training sword. +3 to your average damage, +0 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                            cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 20;
                            equipmentWeapon = 1;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    case 2:
                        cout << "A halberd that's seen better days. +6 to your average damage, +1 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 35;
                            equipmentWeapon = 2;
                            break;
                        }
                        else
                        {
                         break;
                        }
                    case 3:
                        cout << "A well-made rapier. Such a light weapon should allow you to dodge damage much more easily. +4 to your average damage, +4 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 40;
                            equipmentWeapon = 3;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    case 4:
                        cout << "A simple-looking broadsword. The durability of the material means it can cut through most enemies with ease, though its heavy design means you'll be getting cut just as much as you cut others.\n +9 to your average damage, -3 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 50;
                            equipmentWeapon = 4;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    case 5:
                        cout << "An ornate spear. With this weapon, you reckon you can pierce through any armor with ease.\n +9 to your average damage, +0 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 70;
                            equipmentWeapon = 5;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    default:
                    break;
                }
                break;
            case 2:
                cout << "You walk towards some armor stands, quickly examining the wares on offer.\n";
                cout << "You can exit using '0'.\n";
                y = menu(5, "Padded clothing - 5 gold", "Leather armor - 15 gold", "Chainmail - 35 gold", "Steel under-armor - 40 gold", "Steel armor - 65 gold");
                switch(y){
                    case 1:
                        cout << "Plain clothes with a slight cotton under piece. Won't protect you from much, but the ease of movement should let you hit just a little harder.\n +2 to your average damage, +0 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 5;
                            equipmentArmor = 1;
                        break;
                        }
                        else
                        {
                         break;   
                        }
                    case 2:
                        cout << "A simple set of leather armor. Slight protection, on a budget.\n +0 to your average damage, +2 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 15;
                            equipmentArmor = 2;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    case 3:
                        cout << "A sturdy set of chain-mail armor.\n +0 to your average damage, +4 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 35;
                            equipmentArmor = 3;
                            break;
                        }
                        else
                        {
                         break;
                        }
                    case 4:
                        cout << "A set of steel plates outfitted for protection. Offers part of the protection of steel armor, with less of a downside.\n -3 to your average damage, +8 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 40;
                            equipmentArmor = 4;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                    case 5:
                        cout << "A set of sturdy steel armor pieces. Protects you from most enemies, though you won't be moving very fast while you wear it, giving enemies more chances to dodge.\n -6 to your average damage, +18 to your defence.\n";
                        cout << "Do you want to purchase it? Y/N\n";
                        cin >> z;
                        if (z == 'y'||"yes"){
                            gold -= 65;
                            equipmentArmor = 5;
                            break;
                        }
                        else
                        {
                         break;   
                        }
                }
            default:
                break;
        }
    }
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
    int location = 0;
    currentHP = maxHP;
}