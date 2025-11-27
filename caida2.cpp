#include <iostream>
#include <limits>

using namespace std;

void juego();
void instrucciones();
void creditos();
void detalleCanto(int opcion);
void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}   

void Introduccion() {

    cout << "\n===================================================" << endl;
    cout << "                 1. INTRODUCCION        " << endl;
    cout << "===================================================" << endl;
    cout << "Caida es un juego de 2 a 4 jugadores." << endl;
    cout << "Se usa la Baraja Espanola de 40 cartas (sin 8 y 9)." << endl;
    cout << "Objetivo: Ser el primero en alcanzar 24 puntos." << endl;
    
    cout << "\nPresiona ENTER para volver al INSTRUCCIONES..." << endl;
    cin.get();

}

void comoJugar() {

    cout << "\n============================================================================================" << endl;
    cout << "                                    2. COMO JUGAR?       " << endl;
    cout << "============================================================================================" << endl;
    cout << "  - Cada jugador recibe 3 cartas y se colocan 4 cartas boca arriba en la mesa." << endl;
    cout << "  - En su turno, un jugador puede:" << endl;
    cout << "      1. Colocar una carta de su mano en la mesa si no puede tomar cartas." << endl;
    cout << "      2. Tomar una carta que sea igual a la que tenga en su mano y las cartas que le sigan" << endl;
    cout << "      3. Declarar Cantos (En caso de que los tenga)" << endl;
    cout << "\nPresiona ENTER para volver al INSTRUCCIONES..." << endl;
    cin.get();

}

void cantos() {

    int opc_canto;

    do {

        limpiarPantalla();

        cout << "\n==========================================================================================================" << endl;
        cout << "                                                 3. CANTOS                                                " << endl;
        cout << "==========================================================================================================" << endl;
        cout << "Cantos (Selecciona para ver detalles y puntos):" << endl;
        cout << "  1. Caida: Agarrar cartas del oponente del turno anterior." << endl;
        cout << "  2. Ronda: Dos cartas iguales y una diferente." << endl;
        cout << "  3. Trivilin: Tres Cartas Iguales." << endl;
        cout << "  4. Patrulla: Secuencia de tres cartas (cualquier palo)." << endl;
        cout << "  5. Vigia: Dos cartas iguales y una que le sigue o antecede." << endl;
        cout << "  6. Registro: Unicamente las cartas con valor 1, 11 y 12." << endl;
        cout << "  0. Volver a INSTRUCCIONES" << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Opcion: ";

        if (!(cin >> opc_canto)) {
            cout << "\n Ingresa un numero valido! Presiona ENTER para continuar..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            opc_canto = -1;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opc_canto) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                limpiarPantalla();
                detalleCanto(opc_canto);
                break;
            case 0:
                break;
            default:
                cout << "\n Opcion de Canto no valida. Presiona ENTER para intentar de nuevo..." << endl;
                cin.get();
                break;
        }
    } while (opc_canto != 0);
}

void reglas() {

    cout << "\n================================================================" << endl;
    cout << "                  4. OTRAS REGLAS IMPORTANTES     " << endl;
    cout << "================================================================" << endl;
    cout << "Reglas adicionales del juego:" << endl;
    cout << "  - Si el mazo se agota, no se reparten mas cartas." << endl;
    cout << "  - El juego termina cuando un jugador alcanza 24 puntos." << endl;

    cout << "\nPresiona ENTER para volver a INSTRUCCIONES..." << endl;
    cin.get();

}

void instrucciones() {

    int opc;
    
    do {

        limpiarPantalla();

        cout << "\n===================================================" << endl;
        cout << "                 2. INSTRUCCIONES     " << endl;
        cout << "===================================================" << endl;
        cout << "Aqui te ensenamos a jugar, por si no sabias!:" << endl;
        cout << "1. Introduccion" << endl;
        cout << "2. Como Jugar?" << endl;
        cout << "3. Cantos" << endl;
        cout << "4. Otras Reglas Importantes" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Opcion: ";

        if (!(cin >> opc)) {
            cout << "\n Ingresa un numero valido! Presiona ENTER para continuar..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            opc = -1;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opc) {
            case 1:
            limpiarPantalla();
                Introduccion();
                break;
            case 2:
            limpiarPantalla();
                comoJugar();
                break;
            case 3:
            limpiarPantalla();
                cantos();
                break;
            case 4:
            limpiarPantalla();
                reglas();
                break;
            case 0:
                break;
            default:
                cout << "\n Opcion no valida. Presiona ENTER para intentar de nuevo..." << endl;
                cin.get();
                break;
        }
    } while (opc != 0);

} 
 

void juego() {

    cout << "\n==============================" << endl;
    cout << "     1. INICIANDO EL JUEGO     " << endl ;
    cout << "==============================" << endl;
    cout << "Iniciando el juego..." << endl;
    cout << "\nPresione ENTER para volver al menu principal..." << endl;
    cin.get();

}

void creditos() {

    cout << "\n========================================" << endl;
    cout << "               3. CREDITOS         " << endl ;
    cout << "========================================" << endl;
    cout << "Juego Desarrollado Por:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Jose Manuel Rodriguez Flores 23-10427" << endl;
    cout << "Yender Alonzo Rojas Gelves 23-10442 " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Gracias por jugar!" << endl;
    
    cout << "\nPresione ENTER para volver al menu principal..." << endl;
    cin.get(); 

} 

void detalleCanto(int opcion) {
    
    string nombreCanto = "";
    string ASCII = "";

    switch (opcion) {
        case 1:
            nombreCanto = "CAIDA";
            ASCII = "----------";
            break;
        case 2:
            nombreCanto = "RONDA";
            ASCII = 
                "  Ronda: Dos cartas iguales y una diferente.\n"
                "  +-----+  +-----+  +-----+ \n"
                "  |  3  |  |  3  |  |  7  | \n"
                "  |COPAS|  | ESPA|  | BAST| \n"
                "  +-----+  +-----+  +-----+ \n";
            break;
        case 3:
            nombreCanto = "TRIVILIN";
            ASCII = 
                "  Trivilin: Tres cartas iguales.\n"
                "  +-----+  +-----+  +-----+ \n"
                "  |  1  |  |  1  |  |  1  | \n"
                "  | OROS|  |COPAS|  | ESPA| \n"
                "  +-----+  +-----+  +-----+ \n";
            break;
        case 4:
            nombreCanto = "PATRULLA";
            ASCII = 
                "  Patrulla: Secuencia de tres cartas (cualquier palo).\n"
                "  +-----+  +-----+  +-----+ \n"
                "  |  4  |  |  5  |  |  6  | \n"
                "  | OROS|  | OROS|  | OROS| \n"
                "  +-----+  +-----+  +-----+ \n";
            break;
        case 5:
            nombreCanto = "VIGIA";
            ASCII = 
                "  Vigia: Dos cartas iguales y una que le sigue o antecede.\n"
                "  +-----+  +-----+  +-----+ \n"
                "  |  5  |  |  5  |  |  6  | \n"
                "  |COPAS|  | BAST|  | OROS| \n"
                "  +-----+  +-----+  +-----+ \n";
            break;
        case 6:
            nombreCanto = "REGISTRO";
            ASCII = 
                "  Registro: Cartas con valor 1, 11 (Caballo) y 12 (Rey).\n"
                "  +-----+  +-----+  +-----+ \n"
                "  |  1  |  | 11  |  | 12  | \n"
                "  | OROS|  | BAST|  | ESPA| \n"
                "  +-----+  +-----+  +-----+ \n";
            break;
        default:
            return;
    }

    cout << "\n==========================================================================================================" << endl;
    cout << "                                      Canto: " << nombreCanto << endl;
    cout << "==========================================================================================================" << endl;

    switch (opcion) {
        case 1:
            cout << "\nPuntuaciones:" << endl;
            cout << "  - La Caida del 1 al 7 vale 1 punto" << endl;
            cout << "  - La Caida del 10 o Sota vale 2 puntos" << endl;
            cout << "  - La Caida del 11 o Caballo vale 3 puntos" << endl;
            cout << "  - La Caida del 12 o Rey vale 4 puntos\n" << endl;
            break;
        case 2:
            cout << "\nPuntuaciones:" << endl;
            cout << "  - La Ronda de 1 al 7 vale 1 punto" << endl;
            cout << "  - La Ronda de 10 o Sota vale 2 puntos" << endl;
            cout << "  - La Ronda de 11 o Caballo vale 3 puntos" << endl;
            cout << "  - La Ronda de 12 o Rey vale 4 puntos\n" << endl;
            break;
        case 3:
            cout << "\nPuntuaciones:" << endl;
            cout << "  - Trivilin vale 5 puntos" << endl;
            cout << "  - Si un jugador tiene trivilin en primera y ultima mano gana el juego\n" << endl;
            break;
        case 4:
            cout << "\nPuntuaciones:" << endl;
            cout << "  - Patrulla vale 6 puntos" << endl;
            cout << "  - El numero que sigue del 7 es el 10 ya que no hay 8 ni 9" << endl;
            cout << "  - La secuencia termina hasta el Rey (12)\n" << endl;
            break;
        case 5:
            cout << "\nPuntuaciones:" << endl;
            cout << "  - Vigia vale 7 puntos\n" << endl;
            break;
        case 6:
            cout << "\nPuntuacione:" << endl;
            cout << "  - Registro vale 8 puntos\n" << endl;
            break;
        default:
            break;
    }

    cout << "\nEjemplo Visual:" << endl;
    cout << ASCII << endl;
    
    cout << "\nPresiona ENTER para volver al menu de CANTOS..." << endl;
    cin.get();
}

int main() {

    int opc;

    do{

        limpiarPantalla();
    
        cout << "\n===================================================" << endl;
        cout << "               CAIDA: MENU PRINCIPAL          " << endl ;
        cout << "===================================================" << endl;
        cout << "1. Jugar" << endl; 
        cout << "2. Instrucciones (Leer antes de jugar!)" << endl; 
        cout << "3. Creditos (los cerebritos detras del codigo:p)" << endl;
        cout << "0. Salir" << endl; 
        cout << "Seleccione una opcion: ";
        
        if (!(cin >> opc)) {
            cout << "\nIngresa un numero valido! Presione ENTER para continuar." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get(); 
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opc){
        case 1:
        limpiarPantalla();
            juego();
            break;
        case 2:
        limpiarPantalla();
            instrucciones();
            break;
        case 3:
        limpiarPantalla();
            creditos();
            break;
        case 0:
            cout << "Hasta luego!" << endl; 
            break;
        default:
            cout << "\nOpcion invalida. Por favor, intenta de nuevo." << endl; 
            cout << "Presiona ENTER para continuar." << endl;
            cin.get(); 
            break;
        }

    }while(opc != 0);

    return 0;
}