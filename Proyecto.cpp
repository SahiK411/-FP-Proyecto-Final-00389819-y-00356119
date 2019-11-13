#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
int maxHP = 20, currentHP, level = 1, gold = 0, experience = 0, equipmentWeapon = 0, equipmentArmor = 0, location, dano = 0, defensa = 0;
bool inGame = true, isAlive = true;

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
                y = menu(5, "Set de Ropa - 5 gold", "Armadura de Cuero - 15 gold", "Malla de Metal - 35 gold", "Torso de Acero - 40 gold", "Armadura de Acero - 65 gold");
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
                        cout << "Armadura completa de acero. Proteje de la mayor parte de los enemigos, en su contraparte, sacrifica movilidad.\n -6 de ataque, +14 de defensa.\n";
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
        cout << "Has subido de nivel!\n" << "Tus puntos de vida se incrementan por 5, tu dano se incrementa por 3, y tu defense se incrementa por 1.\n";
        level++;
        dano += 3;
        defensa += 1;
        maxHP += 5;
        currentHP = maxHP;
    }
}

void combate(int range,int baseDamage, int hp, int rewardRange){
    //Funcion que manejara el combate del juego.
    int accion, x, porce, tempDef = defensa, tempDano = dano;
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
        switch(equipmentArmor){
                    case 0:
                        dano += 1;
                        defensa += 0;
                        break;

                    case 1:
                        dano += 2;
                        defensa += 0;
                        break;

                    case 2:
                        dano += 0;
                        defensa += 2;
                        break;

                    case 3:
                        dano += 0;
                        defensa += 4;
                        break;

                    case 4:
                        dano -= 3;
                        defensa += 8;
                        break;
                    case 5:
                        dano -= 6;
                        defensa += 14;
                        break;
                }
        accion = menu(3, "Ataque Fuerte", "Ataque Suave", "Defender", "", "");
        switch(accion){
            case 1:
                porce = rand() % 100 + 1;
                if (porce >= 50){
                    x = rand() % 1 + (dano + 3);
                    if(x<0){
                        cout<<"No has hecho dano tio"<<endl;
                    }
                    else{
                        hp -= x;
                    }
                }
                else{
                    cout << "Tu ataque no hizo contacto.\n";
                }
                break;
            case 2:
                porce = rand() % 100 + 1;
                if(porce >= 30){
                    x = rand() % 2 + dano;
                    if(x<0){
                        cout<<"No has hecho dano tio"<<endl;
                    }
                    else{
                        cout << "Tu ataque le hizo " << x << "puntos de dano.\n";
                        hp -= x;
                        cout << "Su vida actual es de: " << hp << endl;
                    }
                }
                else{
                    cout << "Tu ataque no hizo contacto.\n";
                }
                break;
            case 3:
                defensa += 5;
                break;
            default:
                break;
        }
        if (hp > 0){
            x = rand() % range + baseDamage;
            x -= defensa;
            if(x <= 0){
                cout << "No tomas nada de dano.\n";
            }
            else{
                cout << "Tomas " << x << " puntos de dano.\n";
                currentHP -= x;
                if(currentHP <= 0){
                    cout << "Pierdes tu vision y caes al piso. Tu aventura termina aqui.\n";
                    isAlive = false;
                    break;
                }
                cout << "Tu vida actual es de: " << currentHP << endl;
            }
        }
        else if(hp <= 0){
            cout << "Tu enemigo yace inmobil frente a ti. Has sido victorioso.\n";
            x = rand() % rewardRange + 6;
            cout << "Encuentras " << x << " pedazos de oro en tu contrincante.\n";
            gold += x;
            cout << "Tu oro actual es de " << gold << endl;
            x = rand() % rewardRange + 6;
            cout << "Ganas " << x << "puntos de experiencia por la batalla.\n";
            experience += x;
            cout << "Tu experiencia actual es de " << experience << " puntos.\n";
            nivel();
            cout << "Presiona cualquier tecla para continuar.\n";
            cin >> x;
        }
        x = 0;
        defensa = tempDef;
        dano = tempDano;
    }
}

void enemigo(int id){
    switch(id){
        case 0:
            cout << "Un duende se asoma a lo lejos.\n";
            if (level < 2){
                combate(7, 3, 15, 9);
            }
            else{
                combate(5, 4, 19, 2);
            }
            break;
        case 1:
            cout << "Detectas un Tigre observandote desde un arbusto a lo lejos.\n";
            if (level < 4){
                combate(3, 4, 20, 10);
            }
            else{
                combate(6, 7, 28, 4);
            }
            break;
        case 2:
            cout << "Un orco corre hacia ti, gritando.\n";
            if(level < 6){
                combate(9, 9, 25, 14);
            }
            else{
                combate(13, 13, 34, 3);
            }
            break;
        case 3:
            cout << "Una aparicion espectral se asoma a lo lejos. Arranca una espada oxidada de la tierra y se te acerca silenciosamente.\n";
            if(level < 8){
                combate(6, 9, 30, 10);
            }
            else{
                combate(10, 13, 34, 6);
            }
            break;
        case 4:
            cout << "Puedes sentir movimiento dentro de la niebla, y el agua frente a ti se desplaza violentamente. Con mucho esfuerzo, logras encontrar la fuente de la conmocion, una sirena.\n";
            if(level < 12){
                combate(16, 15, 30, 16);
            }
            else{
                combate(18, 16, 34, 20);
            }
            break;
        case 5:
            cout << "Al fondo de la cueva encuentras un golem, facilmente sobrepasa tu altura dos veces. Aparentemente pudo sentir tu movimiento, ya que se levanta y arroja una roca en tu direccion.\n";
            if(level < 15){
                combate(5, 15, 75, 50);
            }
            else{
                combate(7, 16, 80, 55);
            }
            break;
        case 6:
            cout << "Puedes ver una figura ";
    }
}

void movimiento() {
    int menu_mov;
    int porce;
    int currLoc = location;

    switch (currLoc) {
        case 0:
            tienda();
            location = 1;
            break;

        case 1:
            cout << "Te encuentras dentro de un pueblo pequeno, encapsulado por paredes y fortificaciones.\n";
            cout<< "Aqui se encuentra la tienda. Recuerda, solo aqui podras acceder a ella, de lo contrario prosigue en tu adventura. Puedes acercarte al bosque, o entrar a la cueva cercana.\n" << endl;
            menu_mov = menu(3,"Tienda","Bosque","Cueva","","");
            switch(menu_mov){
                case 1:
                    location = 0;
                    break;

                case 2:
                    location = 2;
                    break;
                case 3:
                    location = 3;
                    break;
                default:
                    break;
            }
            break;

        case 2:
            porce = rand() % 100 + 1;
            if (porce <= 60){
                enemigo(0);
            }
            cout << "Te encuentras en las afueras de un bosque, cercano al pueblo. La cubierta de los arboles todavia permite la entrada de la luz de sol.\n";
            cout << "De aqui te puedes adentrar al bosque, entrar a la cueva cercana, o regresar al pueblo.\n";
            if(level < 7){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
            menu_mov = menu(3, "Ir al Bosque Profundo", "Buscar la Cueva", "Regresar al Pueblo", "", "");
            switch(menu_mov){
                case 1:
                    location = 4;
                    break;
                case 2:
                    location = 3;
                    break;
                case 3:
                    location = 1;
                    break;
                default:
                    break;
            }
            break;

        case 3:
            porce = rand() % 100 + 1;
            if (porce <= 40){
                enemigo(1);
            }
            cout << "La entrada de la cueva se encuentra frente a ti. La poca luz que entra sera suficiente para defenderte en una pelea, pero adentrarse mas causara que tus ataques sean menos certeros.\n";
            cout << "De aqui te puedes adentrar a la cueva, salir al bosque cercano, o regresar al pueblo.\n";
            if(level < 5){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
            menu_mov = menu(3, "Adentrarse a la cueva", "Ir al bosque", "Regresar al pueblo", "", "");
            switch(menu_mov){
                case 1:
                    location = 5;
                    break;
                case 2:
                    location = 2;
                    break;
                case 3:
                    location = 1;
                    break;
                default:
                    break;
            }
            break;
        case 4:
            porce = rand() % 100 + 1;
            if (porce <= 80){
                enemigo(3);
            }
            cout << "Te encuentras en un bosque denso. Los arbustos y las hojas muertas anuncian tu presencia a cualquier enemigo cercano, y una niebla blanca los oculta de tu vision.\n";
            cout << "Puedes continuar tu viaje, o retornar hacia las afueras del bosque.\n";
            menu_mov = menu(2, "Buscar la salida del bosque", "Regresar a las afueras del bosque", "", "", "");
            switch(menu_mov){
                case 1:
                    location = 6;
                    break;
                case 2:
                    location = 2;
                    break;
                default:
                    break;
            }
            break;
        case 5:
            porce = rand() % 100 + 1;
            if (porce <= 80){
                enemigo(2);
            }
            cout << "La cueva ha perdido la mayor parte de la luz. Tus ojos se acostumbran a la oscuridad, permitiendote explorar cuidadosamente.\n";
            cout << "Puedes ver dos caminos en la oscuridad, y consideras cual seria el mas oportuno. Tambien podrias retornar por donde entraste, si no te sientes confidente en continuar.\n";
            menu_mov = menu(3, "El camino de la izquierda", "El camino de la derecha", "Retornar", "", "");
            switch(menu_mov){
                case 1:
                    location = 7;
                    break;
                case 2:
                    location = 8;
                    break;
                case 3:
                    location = 3;
                    break;
                default:
                    break;
            }
            break;
        case 6:
            porce = rand() % 100 + 1;
            if (porce <= 90){
                enemigo(4);
            }
            cout << "La niebla se dispersa lo suficiente para ver claramente. Al otro lado de un foso lleno de agua puedes ver un castillo. Parece abandonado.\n";
            cout << "Esta sera tu ultima oportunidad de regresar por medio del bosque. Deseas cruzar el foso?\n";
            menu_mov = menu(2, "Cruzar", "Regresar al bosque", "", "", "");
            switch(menu_mov){
                case 1:
                    location = 9;
                    break;
                case 2:
                    location = 4;
                    break;
                default:
                    break;
            }
            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
    }
}

void saveGame(){
    //Funcion para guardar una partida.
    string name;
    cout << "Ingrese el nombre asignado al archivo del juego.\n";
    cin >> name;
    ofstream newSave ("Saves.txt");
    if(newSave.is_open()){
        newSave << name << " ";
        newSave << to_string(level) << " ";
        newSave << to_string(experience) << " ";
        newSave << to_string(equipmentArmor) << " ";
        newSave << to_string(equipmentWeapon) << " ";
        newSave << to_string(maxHP) << " ";
        newSave << to_string(currentHP) << " ";
        newSave << to_string(gold) << " ";
        newSave.close();
    }
    else{
        cout << "Se produjo un error.";
    }
}

void loadGame(){
    //Funcion para cargar una partida previa de un archivo externo.
    string name, line;
    cout << "Ingrese el nombre asignado al archivo del juego, omitiendo la terminacion del mismo (.txt).\n";
    cin >> name;
    ifstream oldSave (name + ".txt");
    if(oldSave.is_open()){
        /*for (int i = 0, i < 7, i++){
                switch(i){
                    case 0:
                        level = int(line);
                        break;
                    case 1:
                        experience = int(line);
                        break;
                    case 2:
                        equipmentArmor = int(line);
                        break;
                    case 3:
                        equipmentWeapon = int(line);
                        break;
                    case 4:
                        maxHP = int(line);
                        break;
                    case 5:
                        currentHP = int(line);
                        break;
                    case 6:
                        gold = int(line);
                        break;
                }
            } */
        oldSave.close();
    }
    else{
        cout << "Se produjo un error.";
    }
}

int main(){
    currentHP = maxHP;
    location = 0;
    int x;
    while(inGame == true){
        x = menu(3, "Nuevo Juego", "Cargar Juego", "Salir", "", "");
        switch(x){
        case 1:
            break;
        case 2:
            loadGame();
            break;
        case 3:
            inGame = false;
            isAlive = false;
            return 0;
    }
    while(isAlive == true){
        movimiento();
    }
    }
    return 0;
}