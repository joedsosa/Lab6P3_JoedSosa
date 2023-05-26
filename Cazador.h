#ifndef CAZADOR_H
#define CAZADOR_H

#include <string>
#include "Katana.h"
#include "Respiracion.h"

class Cazador {
public:
    Cazador(const string& nombre, Respiracion* respiracion);
    virtual ~Cazador();
    Cazador();
    void imprimir() const;
    int calcularAtaque() const;
    void recibirAtaque(int puntos);
   

protected:
    string nombre;
    int vida;
    Katana katana;
    Respiracion* respiracion;
    int puntosAtaque;

    void generarVida();
    void generarPuntosAtaque();
};

#endif // CAZADOR_H
