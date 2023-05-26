#include <iostream>
#include "Pilar.h"
using namespace std;
Pilar::Pilar(const string& nombre, Respiracion* respiracion, int lunasSuperioresVencidas)
    : Cazador(nombre, respiracion), lunasSuperioresVencidas(lunasSuperioresVencidas) {
    generarVidaExtra();
    
    vida += vidaExtra;
    puntosAtaque += 100;
}


Pilar::~Pilar() {}
int Pilar::getVida() const {
    return vida;
}

int Pilar::getVictorias() const {
    return victorias;
}
void Pilar::incrementarVictorias() {
    victorias++;
}
void Pilar::imprimir() const {
    Cazador::imprimir();
    cout << "Lunas superiores vencidas: " << lunasSuperioresVencidas << endl;
    cout << "Vida extra: " << vidaExtra << endl;
    cout << "----------------------" << endl;
}
void Pilar::recuperarVida() {
    // Recuperar el 100% de la vida
    vida = (vida * 100);
}

int Pilar::calcularAtaque() const {
    int ataqueTotal = Cazador::calcularAtaque();
    if (lunasSuperioresVencidas > 0) {
        ataqueTotal += 20 * lunasSuperioresVencidas;
    }
    return ataqueTotal;
}

void Pilar::recibirAtaque(int puntos) {
    Cazador::recibirAtaque(puntos);
}

void Pilar::generarVidaExtra() {
    vidaExtra = rand() % 11 + 80;
}


