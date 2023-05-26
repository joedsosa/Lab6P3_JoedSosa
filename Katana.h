#ifndef KATANA_H
#define KATANA_H
using namespace std;
#include <string>

class Katana {
public:
    Katana();
    ~Katana();

    void generarAtaque();
    string getColor() const;
    int getAtaque() const;

private:
    int ataque;
    string color;

    string generarColorAleatorio();
};

#endif // KATANA_H
