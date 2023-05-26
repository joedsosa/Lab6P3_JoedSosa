#ifndef PILAR_H
#define PILAR_H

#include "Cazador.h"
using namespace std;

class Pilar : public Cazador {
public:
    Pilar(const string& nombre, Respiracion* respiracion, int lunasSuperioresVencidas);
    ~Pilar();

    void imprimir() const;
    int calcularAtaque() const;
    void recibirAtaque(int puntos);

private:
    int lunasSuperioresVencidas;
    int vidaExtra;

    void generarVidaExtra();
    void generarPuntosAtaqueExtra();
};

#endif 
