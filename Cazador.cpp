#include <iostream>
#include "Cazador.h"
using namespace std;
Cazador::Cazador(const string& nombre, Respiracion* respiracion)
    : nombre(nombre), respiracion(respiracion) {
    generarVida();
    katana.getAtaque();
    generarPuntosAtaque();
}

Cazador::~Cazador() {
    delete respiracion;
}

void Cazador::imprimir() const {
    cout << "----- Cazador -----" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Vida: " << vida << endl;
    cout << "Ataque de la katana: " << katana.getAtaque() << endl;
    cout << "Color de la katana: " << katana.getColor() << endl;
    respiracion->imprimir();
    cout << "Puntos de ataque: " << puntosAtaque << endl;
    cout << "-------------------" << endl;
}

int Cazador::calcularAtaque() const {
    return puntosAtaque;
}

void Cazador::recibirAtaque(int puntos) {
    vida -= puntos;
    if (vida < 0) {
        vida = 0;
    }
}

void Cazador::generarVida() {
    vida = rand() % 11 + 20;
}

void Cazador::generarPuntosAtaque() {
    puntosAtaque = rand() % 11 + 20 + respiracion->getRangoPoder();
}
