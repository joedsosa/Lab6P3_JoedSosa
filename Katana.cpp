#include "Katana.h"
#include <cstdlib>
#include <ctime>

Katana::Katana() {
    generarAtaque();
    color = generarColorAleatorio();
}

Katana::~Katana() {}

void Katana::generarAtaque() {
    ataque = rand() % 11 + 10;
}

std::string Katana::getColor() const {
    return color;
}

int Katana::getAtaque() const {
    return ataque;
}

std::string Katana::generarColorAleatorio() {
    std::string colores[] = { "rojo", "negro", "morado", "naranja" };
    int index = rand() % 4;
    return colores[index];
}
