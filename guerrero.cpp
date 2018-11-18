#include "guerrero.h"

int Guerrero::getId() const
{
    return id;
}

void Guerrero::setId(int value)
{
    id = value;
}

int Guerrero::getSalud() const
{
    return salud;
}

void Guerrero::setSalud(int value)
{
    salud = value;
}

float Guerrero::getFuerza() const
{
    return fuerza;
}

void Guerrero::setFuerza(float value)
{
    fuerza = value;
}

float Guerrero::getEscudo() const
{
    return escudo;
}

void Guerrero::setEscudo(float value)
{
    escudo = value;
}

string Guerrero::getTipoGuerrero() const
{
    tipoGuerrero tipo = guerrero;
    string g;
    if (tipo == tipoGuerrero::lancero) {
        g =  "lancero";
    }
    else if (tipo == tipoGuerrero::arquero) {
        g = "arquero";
    }
    else if (tipo == tipoGuerrero::paladin) {
        g = "paladín";
    }
    else if (tipo == tipoGuerrero::tanque) {
        g = "tanque";
    }

    return g;
}

void Guerrero::setTipoGuerrero(string value)
{
    if (value == "lancero") {
        guerrero = tipoGuerrero::lancero;
    }
    else if (value == "arquero" ) {
        guerrero = tipoGuerrero::arquero;
    }
    else if (value == "paladín") {
        guerrero = tipoGuerrero::paladin;
    }
    else if (value == "tanque") {
        guerrero = tipoGuerrero::tanque;
    }
}

Guerrero::Guerrero()
{

}
