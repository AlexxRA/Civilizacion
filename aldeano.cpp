#include "aldeano.h"

string Aldeano::getNombre() const
{
    return nombre;
}

void Aldeano::setNombre(const string &value)
{
    nombre = value;
}

float Aldeano::getEdad() const
{
    return edad;
}

void Aldeano::setEdad(float value)
{
    edad = value;
}

char Aldeano::getGenero() const
{
    return genero;
}

void Aldeano::setGenero(char value)
{
    genero = value;
}

float Aldeano::getSalud() const
{
    return salud;
}

void Aldeano::setSalud(float value)
{
    salud = value;
}


Aldeano::Aldeano()
{

}
