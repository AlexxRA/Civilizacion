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

string Guerrero::getTipoGuerrero(int value) const
{
//    tipoGuerrero tipo =value;
//    switch (value) {
//    case 1:
//        return "lancero";
//        break;
//    case 2:
//        return "arquero";
//        break;
//    case 3:
//        return "paladin";
//        break;
//    case 4:
//        return "tanque";
//        break;
//    default:
//        return "lancero";
//        break;
//    }
}

void Guerrero::setTipoGuerrero(string value)
{

}

Guerrero::Guerrero()
{

}
