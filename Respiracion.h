#ifndef RESPIRACION_H
#define RESPIRACION_H

#include <string>

class Respiracion {
public:
    virtual ~Respiracion() {}

    virtual void imprimir() const = 0;
    virtual int getRangoPoder() const = 0;
};

class RespiracionAgua : public Respiracion {
public:
    RespiracionAgua();
    ~RespiracionAgua();

    void imprimir() const;
    int getRangoPoder() const;
};

class RespiracionFuego : public Respiracion {
public:
    RespiracionFuego();
    ~RespiracionFuego();

    void imprimir() const;
    int getRangoPoder() const;
};

class RespiracionRoca : public Respiracion {
public:
    RespiracionRoca();
    ~RespiracionRoca();

    void imprimir() const;
    int getRangoPoder() const;
};

#endif // RESPIRACION_H
