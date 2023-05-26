#include "Respiracion.h"
#include <iostream>
using namespace std;
RespiracionAgua::RespiracionAgua() {}
RespiracionAgua::~RespiracionAgua() {}

void RespiracionAgua::imprimir() const {
    cout << "Respiración: Agua" << endl;
}

int RespiracionAgua::getRangoPoder() const {
    return rand() % 21 + 60;
}

RespiracionFuego::RespiracionFuego() {}
RespiracionFuego::~RespiracionFuego() {}

void RespiracionFuego::imprimir() const {
    cout << "Respiración: Fuego" << endl;
}

int RespiracionFuego::getRangoPoder() const {
    return rand() % 21 + 80;
}

RespiracionRoca::RespiracionRoca() {}
RespiracionRoca::~RespiracionRoca() {}

void RespiracionRoca::imprimir() const {
    cout << "Respiración: Roca" << endl;
}

int RespiracionRoca::getRangoPoder() const {
    return rand() % 21 + 100;
}
