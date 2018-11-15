#ifndef GUERRERO_H
#define GUERRERO_H
#include <iostream>
using namespace std;

class Guerrero
{
private:
    int id;
    int salud;
    float fuerza;
    float escudo;
    enum tipoGuerrero{lancero=1,arquero=2,paladin=3,tanque=4};

public:
    Guerrero();


    int getId() const;
    void setId(int value);
    int getSalud() const;
    void setSalud(int value);
    float getFuerza() const;
    void setFuerza(float value);
    float getEscudo() const;
    void setEscudo(float value);

    string getTipoGuerrero(int value) const;
    void setTipoGuerrero(string value);
};

#endif // GUERRERO_H
