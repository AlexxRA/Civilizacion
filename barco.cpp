#include "barco.h"

int Barco::getId() const
{
    return id;
}

void Barco::setId(int value)
{
    id = value;
}

float Barco::getCombustible() const
{
    return combustible;
}

void Barco::setCombustible(float value)
{
    combustible = value;
}

float Barco::getVelocidad() const
{
    return velocidad;
}

void Barco::setVelocidad(float value)
{
    velocidad = value;
}

float Barco::getArmadura() const
{
    return armadura;
}

void Barco::setArmadura(float value)
{
    armadura = value;
}

void Barco::agregarGuerrero(Guerrero &g)
{
    pilaGuerreros.push(g);
}

void Barco::eliminarGuerrero()
{
    if (pilaGuerreros.empty()){
        cout << "No hay guerreros..." << endl;
        return;
    }
    else{
        pilaGuerreros.pop();
    }
}

Guerrero Barco::topeGuerreros()
{
    return pilaGuerreros.top();
}

int Barco::getGuerreros()
{
    return pilaGuerreros.size();
}

stack<Guerrero> Barco::getPila()
{
    return pilaGuerreros;
}

Barco::Barco()
{

}
