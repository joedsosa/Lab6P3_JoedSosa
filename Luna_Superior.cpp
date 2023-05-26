#include "Luna_Superior.h"
#include <iostream>
using namespace std;
Luna_Superior:: Luna_Superior(const string& nombre ): nombre (nombre),vida(400+rand()%101), ataque(150+rand()% 251){}

void Luna_Superior::imprimir() const {
	cout << "-------------Luna Superior--------------" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Vida: " << vida << endl;
	cout << "Ataque: " << ataque << endl;

}
int Luna_Superior::calcularAtaque() const {
	return ataque;
}
void Luna_Superior::recibriAtaque(int puntos) {
	vida -= puntos;
	if (vida < 0) {
		vida = 0;
	}
}
int Luna_Superior::getVida() const {
	return vida;

}
string Luna_Superior::getNombre() const {
	return nombre;
}