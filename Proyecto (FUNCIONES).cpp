#include <iostream>
#include <math.h>

using namespace std;
int maxHP = 20, currentHP, level = 1, gold = 0, experience = 0, equipmentWeapon = 0, equipmentArmor = 0, location;


    int menu(int options, string option1, string option2, string option3, string option4, string option5){
    int playerOption = 0; //Funcion para un menu reutilizable
    switch (options){
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
    cout << "Usted entra a la tienda. La mercancia se encuentra dividida en dos puestos distintos.\n";
    cout << "Pulse '0' para salir.\n";
    while (x != 0){
        x = menu(2, "- Comprar armas.", "- Comprar armadura.", "","","");
        switch (x){
            case 1:
                cout << "Bienvenido a la seccion de armas. Puede adquirir cualquier producto que le llame la atencion.\n";
                cout << "Pulse '0' para salir.\n";
                y = menu(5, "Espada de entrenamiento - 20 ORO" , "Alabarda Oxidada - 35 ORO", "Espada de plata - 40 ORO", " Sable de acero- 50 ORO", "Lanza de Oro - 70 ORO");
                switch (y){
                    case 1:
                        cout << "Pequena espada de entrenamiento. +3 de ataque, +0 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 20;
                            equipmentWeapon = 1;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 2:
                        cout << "Alabarda Oxidada. +6 de ataque, +1 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 35;
                            equipmentWeapon = 2;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 3:
                        cout << "Espada de plata. Arma ligera, permitiendo mayor agilidad al momento del combaate. +4 de ataque, +4 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 40;
                            equipmentWeapon = 3;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 4:
                        cout << "Sable de acero. El acero aporta una mayor durabilidad al arama, permite atravesar a los enemigos con facilidad. Debido al material de construccion, el hierro sacrifica movilidad a la hora del combate.\n +9 de ataque, -3 defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 50;
                            equipmentWeapon = 4;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 5:
                        cout << "Lanza de oro. La lanza de oro, permite atravesar cualquier armadura con facilidad.\n" ".\n +9 de ataque, +0 defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
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
                cout << "Bienvenido a la seccion de armaduras. Puede adquirir cualquier producto que le llame la atencion.\n";
                cout << "Pulse '0' para salir..\n";
                y = menu(5, "Padded clothing - 5 gold", "Leather armor - 15 gold", "Chainmail - 35 gold", "Steel under-armor - 40 gold", "Steel armor - 65 gold");
                switch(y){
                    case 1:
                        cout << "Set de ropa. No te protejera de mucho, pero gracias a su peso ligero, aportara mayor movilidad en combate.\n +2 de ataque, +0 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 5;
                            equipmentArmor = 1;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 2:
                        cout << "Armadura de cuero. Aporta proteccion minima.\n +0 de ataque, +2 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 15;
                            equipmentArmor = 2;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 3:
                        cout << "Armadura de Malla de metal.\n +0 de ataque, +4 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 35;
                            equipmentArmor = 3;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 4:
                        cout << "Torso de una armadura de acero. Aporta una porcion de proteccion de una armadura de acero.\n -3 de ataque, +8 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            gold -= 40;
                            equipmentArmor = 4;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    case 5:
                        cout << "Armadura completa de acero. Proteje de la mayor parte de los enemigos, en su contraparte, sacrifica movilidad.\n -6 de ataque, +18 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
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
    int func = int(floor(float(experience)/35) + 1);
    if(func == level++){
        level++;
    }
}

void combate(int lowerRange, int upperRange, int hp, int rewardLower, int rewardUpper){
    //Funcion que manejara el combate del juego.
    int accion, dano=0, defensa=0, x, porce;
    while(currentHP > 0 && hp > 0){
        switch(equipmentWeapon){
                    case 0:
                        dano += 1;
                        defensa += 0;
                        break;

                    case 1:
                        dano += 4;
                        defensa += 0;
                        break;

                    case 2:
                        dano += 7;
                        defensa += 1;
                        break;

                    case 3:
                        dano += 5;
                        defensa += 4;
                        break;

                    case 4:
                        dano += 10;
                        defensa -= 3;
                        break;
                    case 5:
                        dano += 10;
                        defensa += 0;
                        break;
                }
        accion = menu(3, "Ataque Fuerte", "Ataque Suave", "Defender", "", "");
        switch(accion){
            case 1:
                porce = rand() % 100 + 1;
                if (porce >= 60){
                    x = rand() % 5 + dano;
                    if(x<0){
                    cout<<"No has hecho dano tio"<<endl;
                    }
                    else{
                        hp -= x;
                    }
                }
                else{
                    
                }
                break;
            case 2:
                x = rand() % 2 + dano
        }
    }
}

void enemigo(int id){
    switch(id){
        case 0:
            cout << "Un duende se asoma a lo lejos.\n";
            combate(1, 6, 10, 5, 9);
            break;
        case 1:
            cout << "Detectas un Tigre observandote desde un arbusto a  lejos.\n";
            combate(4, 10, 16, 5, 15);
            break;
        case 2:
            cout << "An orc charges at you, screeching.\n";
            combate(7, 16, 25, 12, 24);
            break;
    }
}

int movimiento() {
    int menu_mov;
    int porce;
    int currLoc = location;

    switch (currLoc) {
        case 0:
            tienda();
            location = 1;
            break;

        case 1:
            cout<< "Bienvenido al Himalaya.\n"
                   "Aqui inicia tu adventura.\n"
                   "Aqui se encuentra la tienda. Si deseas acceder en ella presiona '1'.\n"
                   "Recuerda, solo aqui podras acceder a ella, de lo contrario prosigue en tu adventura.\n" << endl;


            menu_mov = menu(3,"Tienda","Bosque","","","");
            switch(menu_mov){
                case 1:
                    location = 0;
                    break;

                case 2:
                    location = 2;
                    break;
            }

                break;

        case 2:
            cout;
            porce = rand() % 100 + 1;
            if (porce <= 35){
                enemigo(1);
            }
            break;

        case 3:

            break;

        case 4:

            break;

        case 5:

            break;

        case 6:

            break;

        case 7:

            break;

        case 8:

            break;

        case 9:

            break;
    }
}

int main(){
    currentHP = maxHP;
    location = 0;
    bool inGame = true;
    while(inGame == true){
        location = movimiento();
    }
}