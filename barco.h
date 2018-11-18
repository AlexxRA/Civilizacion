#ifndef BARCO_H
#define BARCO_H
#include <stack>
#include "guerrero.h"
#include <iostream>
using namespace std;


class Barco
{
private:
    int id;
    float combustible;
    float velocidad;
    float armadura;
public:
    Barco();
    int getId() const;
    void setId(int value);
    float getCombustible() const;
    void setCombustible(float value);
    float getVelocidad() const;
    void setVelocidad(float value);
    float getArmadura() const;
    void setArmadura(float value);

    stack<Guerrero> pilaGuerreros;
    void agregarGuerrero(Guerrero &g);
    void eliminarGuerrero();
    Guerrero topeGuerreros();
    int getGuerreros();
    stack<Guerrero> getPila();

};

#endif // BARCO_H
