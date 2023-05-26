#pragma once
#include <string>
using namespace std;
class Luna_Superior{
public: 
	Luna_Superior(const string& nombre);
	void imprimir() const;
	int calcularAtaque() const;
	void recibriAtaque(int puntos);
	int getVida() const;
	string getNombre() const;
private: 
	string nombre;
	int vida;
	int ataque;
};

