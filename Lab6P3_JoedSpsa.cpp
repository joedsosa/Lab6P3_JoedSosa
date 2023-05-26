#include <iostream>
#include <vector>
#include <ctime>
#include "Cazador.h"
#include "Pilar.h"
#include "Luna_Superior.h"
#include <iostream>
using namespace std;
void menu() {
    cout << "Bienvenido" << endl;
    cout << "1. Crear Cazador" << endl;
    cout << "2. Crear Pilar" << endl;
    cout << "3. Crear luna superior" << endl;
    cout << "4. Imprimir cazadores y pilares" << endl;
    cout << "5. Impimir lunas superiores" << endl;
    cout << "6. simulacion " << endl;
    cout << "7. Salir" << endl;
}
int main() {
    srand(time(nullptr));
    vector <Cazador*> cazadores;
    vector < Luna_Superior*> lunasSuperiores;
    Pilar* pilar = nullptr;

    int opcion = 0;
    while (opcion != 7) {
        menu();
        cin >> opcion;

        switch (opcion) {
        case 1: {
                string nombre;
                int tipoRespiracion;

                cout << "Ingrese el nombre del cazador: ";
                cin >> nombre;
                cout << "Seleccione el tipo de respiracion: " << endl;
                cout << "1. Agua" << endl;
                cout << "2. Fuego " << endl;
                cout << "3. Roca" << endl;
                cout << "Ingrese una opcion: ";
                cin >> tipoRespiracion;

                Respiracion* respiracion = nullptr;

                switch (tipoRespiracion) {
                case 1: 
                    respiracion = new RespiracionAgua();
                    break;
                case 2: 
                    respiracion = new RespiracionFuego();
                    break;
                case 3: 
                    respiracion = new RespiracionRoca();
                    break;
                default: 
                    cout << "Opcion Invalida, Se utilizara Respiracion Agua por defecto";
                    respiracion = new RespiracionAgua();
                }
                cazadores.push_back(new Cazador(nombre, respiracion));
                break;
            }
        case 2: {
            string nombre;
            int tipoRespiracion;
            int lunasSuperioresVencidas;

            cout << "Ingrese el nombre del pilar: ";
            cin >> nombre;

            cout << "Seleccione el tipo de respiracion: " << endl;
            cout << "1. Agua" << endl;
            cout << "2. Fuego " << endl;
            cout << "3. Roca" << endl;
            cout << "Ingrese una opcion: ";
            cin >> tipoRespiracion;

            cout << "Ingrse la cantidad de lunas superiores vencida: ";
            cin >> lunasSuperioresVencidas;

            Respiracion* respiracion = nullptr;

            switch (tipoRespiracion){
            case 1:
                respiracion = new RespiracionAgua();
                break;
            case 2:
                respiracion = new RespiracionFuego();
                break;
            case 3:
                respiracion = new RespiracionRoca();
                break;
            default:
                cout << "Opcion invalida se utilizara respiracion agua por defecto";
                respiracion = new RespiracionAgua();
                break;
            }
            if (pilar != nullptr) {
                delete pilar;
            }
            pilar = new Pilar(nombre, respiracion, lunasSuperioresVencidas);
            break;
        }
        case 3: {
            string nombre;
            cout << "Ingrse el nombre de la luna superior: ";
            cin >> nombre;

            lunasSuperiores.push_back(new Luna_Superior(nombre));
            break;
        }
        case 4: cout << "-------------Cazadores---------" << endl;
            for (const auto& cazador : cazadores) {
                cazador->imprimir();
            }
        }
        
    }
}


