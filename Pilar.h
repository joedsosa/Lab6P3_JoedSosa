#ifndef PILAR_H
#define PILAR_H

#include "Cazador.h"
using namespace std;

class Pilar : public Cazador {
public:
    
    Pilar(const string& nombre, Respiracion* respiracion, int lunasSuperioresVencidas);
    ~Pilar();
    int getVida() const;
    void imprimir() const;
    int calcularAtaque() const;
    void recibirAtaque(int puntos);
    int getVictorias() const;
    void incrementarVictorias();
    void recuperarVida();

    

private:
    int lunasSuperioresVencidas;
    int vidaExtra;
    int victorias;
    void generarVidaExtra();
    
};

#endif 
