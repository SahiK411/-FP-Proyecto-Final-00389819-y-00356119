#include <iostream>
#include <math.h>
#include <fstream>
#include <time.h>
#include <string>
#include <cstdlib>
using namespace std;
int maxHP, currentHP, level, gold, experience, equipmentWeapon, equipmentArmor, location, dano, defensa;
bool inGame = true, isAlive = true;

int menu(int options, string option1, string option2, string option3, string option4, string option5){
    string playerOption; 
    //Funcion para un menu reutilizable en el juego.
    bool good = true;
    while(good == true){
        switch (options){
            case 1:
                cout << "\t1- " << option1 << endl;
                cin >> playerOption;
                if(playerOption == "1"){
                    good = false;
                }
                else{
                    cout << "Por favor escoja el numero de una opcion valida.\n";
                }
                break;
            case 2:
                cout << "\t1- " << option1 << endl;
                cout << "\t2- " << option2 << endl;
                cin >> playerOption;
                if(playerOption == "1" || "2"){
                    good = false;
                }
                else{
                    cout << "Por favor escoja el numero de una opcion valida.\n";
                }
                break;
            case 3:
                cout << "\t1- " << option1 << endl;
                cout << "\t2- " << option2 << endl;
                cout << "\t3- " << option3 << endl;
                cin >> playerOption;
                if(playerOption == "1" || "2" || "3"){
                    good = false;
                }
                else{
                    cout << "Por favor escoja el numero de una opcion valida.\n";
                }
                break;
            case 4:
                cout << "\t1- " << option1 << endl;
                cout << "\t2- " << option2 << endl;
                cout << "\t3- " << option3 << endl;
                cout << "\t4- " << option4 << endl;
                cin >> playerOption;
                if(playerOption == "1" || "2" || "3" || "4"){
                    good = false;
                }
                else{
                    cout << "Por favor escoja el numero de una opcion valida.\n";
                }
                break;
            case 5:
                cout << "\t1- " << option1 << endl;
                cout << "\t2- " << option2 << endl;
                cout << "\t3- " << option3 << endl;
                cout << "\t4- " << option4 << endl;
                cout << "\t5- " << option5 << endl;
                cin >> playerOption;
                if(playerOption == "1" || "2" || "3" || "4" || "5" || "0"){
                    good = false;
                }
                else{
                    cout << "Por favor escoja el numero de una opcion valida.\n";
                }
            default:
                break;
        }
    }
    return atoi(playerOption.c_str());
}

void tienda(){
    int x = 1, y; 
    //Funcion para cambiar el arma y armadura del jugador mediante compras.
    string z;
    cout << "Usted entra a la tienda. La mercancia se encuentra dividida en dos puestos distintos.\n";
    while (x != 0){
        cout << "Su oro actual es de: " << gold << ". Pulse '0' para salir.\n";
        x = menu(2, "Comprar armas.", "Comprar armadura.", "","","");
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
                            if(gold >= 20){
                                gold -= 20;
                                equipmentWeapon = 1;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 35){
                                gold -= 35;
                                equipmentWeapon = 2;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    case 3:
                        cout << "Espada de plata. Arma ligera, permitiendo mayor agilidad al momento del combate. +4 de ataque, +4 de defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            if(gold >= 40){
                                gold -= 40;
                                equipmentWeapon = 3;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    case 4:
                        cout << "Sable de acero. El acero aporta una mayor durabilidad al arma, permite atravesar a los enemigos con facilidad. Debido al material de construccion, el hierro sacrifica movilidad a la hora del combate.\n +9 de ataque, -3 defensa.\n";
                        cout << "Adquirir? S/N\n";
                        cin >> z;
                        if (z == "s" || "si" || "Si" || "S" || "SI"){
                            if(gold >= 50){
                                gold -= 50;
                                equipmentWeapon = 4;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 70){
                                gold -= 70;
                                equipmentWeapon = 5;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 5){
                                gold -= 5;
                                equipmentArmor = 1;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 15){
                                gold -= 15;
                                equipmentArmor = 2;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 35){
                                gold -= 35;
                                equipmentArmor = 3;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 40){
                                gold -= 40;
                                equipmentArmor = 4;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
                            if(gold >= 65){
                                gold -= 65;
                                equipmentArmor = 5;
                                break;
                            }
                            else{
                                cout << "No tienes suficiente oro.\n";
                                break;
                            }
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
    //Funcion que rige cuando el jugador sube de nivel.
    int temp = level + 1;
    int check = int(floor(experience/35));
    int func = check + 1;
    if(func >= temp){
        cout << "Has subido de nivel!\n" << "Tus puntos de vida se incrementan por 5, tu dano se incrementa por 3, y tu defense se incrementa por 1.\n";
        level++;
        dano += 3;
        defensa += 1;
        maxHP += 10;
        currentHP = maxHP;
    }
}

bool combate(int range,int baseDamage, int hp, int rewardRange){
    //Funcion que maneja el combate del juego.
    int accion, x, porce;
    string n;
    srand (time(NULL));
    while(currentHP > 0 && hp > 0){
        int tempDef = defensa, tempDano = dano;
        switch(equipmentWeapon){
            case 0:
                tempDano += 1;
                tempDef += 0;
                break;

            case 1:
                tempDano += 4;
                tempDef += 0;
                break;

            case 2:
                tempDano += 7;
                tempDef += 1;
                break;

            case 3:
                tempDano += 5;
                tempDef += 4;
                break;

            case 4:
                tempDano += 10;
                tempDef -= 3;
                break;
            case 5:
                tempDano += 10;
                tempDef += 0;
                break;
        }
        switch(equipmentArmor){
            case 0:
                tempDano += 1;
                tempDef += 0;
                break;

            case 1:
                tempDano += 2;
                tempDef += 0;
                break;

            case 2:
                tempDano += 0;
                tempDef += 2;
                break;

            case 3:
                tempDano += 0;
                tempDef += 4;
                break;

            case 4:
                tempDano -= 3;
                tempDef += 8;
                break;
            case 5:
                tempDano -= 6;
                tempDef += 14;
                break;
        }
        accion = menu(3, "Ataque Fuerte", "Ataque Suave", "Defender", "", "");
        switch(accion){
            case 1:
                porce = rand() % 100 + 1;
                if (porce >= 40){
                    x = rand() % 3 + (tempDano);
                    if(x <= 0){
                        cout << "No has hecho dano tio" << endl;
                    }
                    else{
                        cout << "Tu ataque le hizo " << x << " puntos de dano.\n";
                        hp -= x;
                        cout << "Su vida actual es de: " << hp << endl;
                    }
                }
                else{
                    cout << "Tu ataque no hizo contacto.\n";
                }
                break;
            case 2:
                porce = rand() % 100 + 1;
                if(porce >= 20){
                    x = rand() % 1 + tempDano;
                    if(x <= 0){
                        cout << "No has hecho dano tio" << endl;
                    }
                    else{
                        cout << "Tu ataque le hizo " << x << " puntos de dano.\n";
                        hp -= x;
                        cout << "Su vida actual es de: " << hp << endl;
                    }
                }
                else{
                    cout << "Tu ataque no hizo contacto.\n";
                }
                break;
            case 3:
                tempDef += 5;
                porce = rand() % 100 + 1;
                if(porce >= 50){
                    currentHP += 10;
                    if(currentHP > maxHP){
                        currentHP = maxHP;
                    }
                    cout << "Recuperas 10 de vida!\n";
                    cout << "Tu vida actual es de: " << currentHP << endl;
                }
                break;
            default:
                break;
        }
        if (hp > 0){
            x = rand() % range + baseDamage;
            x -= tempDef;
            if(x <= 0){
                cout << "No tomas nada de dano.\n";
            }
            else{
                cout << "Tomas " << x << " puntos de dano.\n";
                currentHP -= x;
                if(currentHP <= 0){
                    cout << "Pierdes tu vision y caes al piso. Tu aventura termina aqui.\n";
                    isAlive = false;
                    return false;
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
            cout << "Ganas " << x << " puntos de experiencia por la batalla.\n";
            experience += x;
            cout << "Tu experiencia actual es de " << experience << " puntos.\n";
            nivel();
            cout << "Entra cualquier valor para continuar.\n";
            cin >> n;
            return true;
        }
        x = 0;
    }
    return true;
}

bool enemigo(int id){
    //Funcion que inicializa los valores de la funcion combate.
    bool x;
    switch(id){
        case 0:
            cout << "Un duende se asoma a lo lejos.\n";
            if (level < 2){
                x = combate(7, 3, 15, 9);
            }
            else{
                x = combate(5, 4, 19, 2);
            }
            break;
        case 1:
            cout << "Detectas un tigre observandote desde un arbusto a lo lejos.\n";
            if (level < 4){
                x = combate(3, 4, 20, 13);
            }
            else{
                x = combate(6, 7, 28, 4);
            }
            break;
        case 2:
            cout << "Un orco corre hacia ti, gritando.\n";
            if(level < 6){
                x = combate(9, 9, 25, 14);
            }
            else{
                x = combate(13, 13, 34, 3);
            }
            break;
        case 3:
            cout << "Una aparicion espectral se asoma a lo lejos. Arranca una espada oxidada de la tierra y se te acerca silenciosamente.\n";
            if(level < 8){
                x = combate(6, 9, 30, 10);
            }
            else{
                x = combate(10, 13, 34, 6);
            }
            break;
        case 4:
            cout << "Puedes sentir movimiento dentro de la niebla, y el agua frente a ti se desplaza violentamente. Con mucho esfuerzo, logras encontrar la fuente de la conmocion, una sirena.\n";
            if(level < 12){
                x = combate(16, 15, 30, 16);
            }
            else{
                x = combate(18, 16, 34, 20);
            }
            break;
        case 5:
            cout << "Al fondo de la cueva encuentras un golem, facilmente sobrepasa tu altura dos veces. Aparentemente pudo sentir tu movimiento, ya que se levanta y arroja una roca en tu direccion.\n";
            if(level < 15){
                x = combate(50, 15, 75, 50);
            }
            else{
                x = combate(70, 16, 80, 55);
            }
            break;
        case 6:
            cout << "Puedes ver una figura al fondo del pasaje. El enemigo frente a ti es un dullahan, el cual esta usando su cabeza para escanear la cueva. Se enfoca en tu direccion, y su mano libre agarra un sable de su espalda.\n";
            if(level < 17){
                x = combate(15, 18, 56, 28);
            }
            else{
                x = combate(20, 22, 60, 28);
            }
            break;
        case 7:
            cout << "Te encuentras a un dragon de tres cabezas. Inmediatamente se mueve, quebrando la pared detras de ti y bloqueando tu salida. Esta sera tu ultima batalla.\n";
            x = combate(30, 42, 90, 100);
    }
    return x;
}

bool vacio(std::ifstream& pFile){
    //Funcion que revisa si un documento esta vacio.
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void saveGame(){
    int flag=0, flag2 = 0;
    //Funcion para guardar una partida.
    string name, recordedName, recordedLvl, recordedExp, recEquiArm, recEquiWep, recHP, recCurrHP, recGold, recLocation;
    cout << "Ingrese el nombre asignado al archivo del juego.\n";
    cin >> name;
    ofstream Save("Savestemp.txt");
    ifstream Save2("Saves.txt");
    if(vacio(Save2) == 1){
        Save << endl;
    }
    if(Save.is_open()){
        while(!Save2.eof() && flag == 0){
            Save2 >> recordedName >> recordedLvl >> recordedExp >> recEquiArm >> recEquiWep >> recHP >> recCurrHP >> recGold >> recLocation;
            if(recordedName == name && flag==0){
                recordedLvl = to_string(level);
                recordedExp = to_string(experience);
                recEquiArm = to_string(equipmentArmor);
                recEquiWep = to_string(equipmentWeapon);
                recHP = to_string(maxHP);
                recCurrHP = to_string(currentHP);
                recGold = to_string(gold);
                recLocation = to_string(location);
                flag2 = 1;
            }
            Save << recordedName << " " << recordedLvl << " " << recordedExp << " " << recEquiArm << " " << recEquiWep << " " << recHP << " " << recCurrHP << " " << recGold << " " << recLocation << endl;
            if(Save2.eof()){
                flag = 1;
            }
        }
        if(Save2.eof() && flag2 == 0){
            Save.close();
            ofstream Save3("Savestemp.txt", ios::app);
            Save3 << name << " " << to_string(level) << " " << to_string(experience) << " " << to_string(equipmentArmor) << " " << to_string(equipmentWeapon) << " " << to_string(maxHP);
            Save3 << " " << to_string(currentHP) << " " << to_string(gold) << " " << to_string(location);
            Save3.close();
        }

    }
    else{
        cout << "Se produjo un error.";
    }
    if(flag2 == 1){
        Save.close();
    }
    Save2.close();
    remove("Saves.txt");
    rename("Savestemp.txt", "Saves.txt");
}

bool loadGame(){
    //Funcion para cargar una partida previa de un archivo externo.
    string name, line, recordedName, recordedLvl, recordedExp, recEquiArm, recEquiWep, recHP, recCurrHP, recGold, recLocation;
    cout << "Ingrese el nombre asignado a tu partida anterior.\n";
    cin >> name;
    ifstream Save("Saves.txt"); //leer de este archivo
    if(!Save){
        cout << "Error al abrir el archivo!" << endl;
    }
    else{
        while(!Save.eof()){
            Save >> recordedName >> recordedLvl >> recordedExp >> recEquiArm >> recEquiWep >> recHP >> recCurrHP >> recGold >> recLocation;
            if(recordedName == name){
                level = atoi(recordedLvl.c_str());
                experience = atoi(recordedExp.c_str());
                equipmentArmor = atoi(recEquiArm.c_str());
                equipmentWeapon = atoi(recEquiArm.c_str());
                maxHP = atoi(recHP.c_str());
                currentHP = atoi(recCurrHP.c_str());
                gold = atoi(recGold.c_str());
                location = atoi(recLocation.c_str());
                return true;
            }
        }
    }
    return false;
}

void movimiento() {
    //Funcion que rige el movimiento y la inicialiacion del combate en el juego
    int menu_mov, porce;
    bool victory;
    srand (time(NULL));

    switch (location) {
        case 0:
            tienda();
            location = 1;
            break;
        case 1:
            cout << "Te encuentras dentro de un pueblo pequeno, encapsulado por paredes y fortificaciones.\n";
            currentHP = maxHP;
            cout<< "Aqui se encuentra la tienda. Recuerda, solo aqui podras acceder a ella, de lo contrario prosigue en tu adventura. Puedes acercarte al bosque, o entrar a la cueva cercana.\n" << endl;
            menu_mov = menu(5,"Tienda","Bosque","Cueva","Deseas guardar tu partida?","Desea salir del juego?");
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
                case 4:
                    saveGame();
                    break;
                case 5:
                    inGame = false;
                    isAlive = false;
                    break;
                default:
                    break;
            }
            break;
        case 2:
            porce = rand() % 100 + 1;
            if (porce <= 60){
                victory = enemigo(0);
            }
            if (victory == false){
                break;
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
                victory = enemigo(1);
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
                victory = enemigo(3);
            }
            if (victory == false){
                break;
            }
            cout << "Te encuentras en un bosque denso. Los arbustos y las hojas muertas anuncian tu presencia a cualquier enemigo cercano, y una niebla blanca los oculta de tu vision.\n";
            cout << "Puedes continuar tu viaje, o retornar hacia las afueras del bosque.\n";
            if(level < 10){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
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
                victory = enemigo(2);
            }
            if (victory == false){
                break;
            }
            cout << "La cueva ha perdido la mayor parte de la luz. Tus ojos se acostumbran a la oscuridad, permitiendote explorar cuidadosamente.\n";
            cout << "Puedes ver dos caminos en la oscuridad, y consideras cual seria el mas oportuno. Tambien podrias retornar por donde entraste, si no te sientes confidente en continuar.\n";
            if(level < 14){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
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
                victory = enemigo(4);
            }
            if (victory == false){
                break;
            }
            cout << "La niebla se dispersa lo suficiente para ver claramente. Al otro lado de un foso lleno de agua puedes ver un castillo. Parece abandonado.\n";
            cout << "Esta sera tu ultima oportunidad de regresar por medio del bosque. Deseas cruzar el foso?\n";
            if(level < 17){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
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
            victory = enemigo(5);
            if (victory == false){
                break;
            }
            cout << "Despues de la batalla, tratas de continuar por el pasaje. Sin embargo, no tardas en toparte con un muro. No importa cuanto intentes, parecce ser un callejon sin salida.\n";
            cout << "Tu unica opcion es regresar.\n";
            menu_mov = menu(1, "Regresar", "", "", "", "");
            switch (menu_mov){
                case 1:
                    location = 5;
                    break;
                default:
                    break;
            }
            break;
        case 8:
            victory = enemigo(6);
            if (victory == false){
                break;
            }
            cout << "Despues de la batalla, continuas por el pasaje. No tardas en encontrar una salida, la cual viene a dar a un puente. Del otro lado puedes ver un castillo abandonado.\n";
            cout << "Deseas continuar? Esta sera tu ultima oportunidad de regresar por medio de la cueva.\n";
            if(level < 17){
                cout << "No te sientes muy seguro en tus habilidades, no seria buena idea adentrarse mas.\n";
            }
            menu_mov = menu(2, "Cruzar", "Regresar por la cueva", "", "", "");
            switch (menu_mov){
                case 1:
                    location = 9;
                    break;
                default:
                    break;
            }
            break;
        case 9:
            victory = enemigo(7);
            if (victory == false){
                break;
            }
            cout << "Has triunfado sobre la bestia! Te sientes seguro de que nada en este mundo puede contra ti, y que esta solo fue la primera de muchas aventuras.\n";
            cout << "Conglaturation!\n";
            isAlive = false;
            break;
    }
}

void menu_principal(){
    //Funcion del menu principal
    int x;
    bool y;
    x = menu(3, "Nuevo Juego", "Cargar Juego", "Salir", "", "");
    switch(x){
        case 1:
            isAlive = true;
            maxHP = 40;
            currentHP = maxHP;
            level = 1;
            experience = 0;
            gold = 10;
            equipmentArmor = 0;
            equipmentWeapon = 0;
            location = 1;
            dano = 0;
            defensa = 0;
            break;
        case 2:
            y =loadGame();
            if (y == true){
                isAlive = true;
            }
            else{
                isAlive = false;
            }
            break;
        case 3:
            inGame = false;
            isAlive = false;
            break;
    }
    while(isAlive == true){
        movimiento();
    }
}

int main(){
    //Funcion Main
    currentHP = maxHP;
    location = 1;

    while(inGame == true){
        menu_principal();
    }
    return 0;
}