#ifndef GUERRERO_H
#define GUERRERO_H
#include <iostream>
using namespace std;
enum class tipoGuerrero{lancero=1,arquero=2,paladin=3,tanque=4};


class Guerrero
{
private:
    int id;
    int salud;
    float fuerza;
    float escudo;
    tipoGuerrero guerrero;

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

    string getTipoGuerrero() const;
    void setTipoGuerrero(int value);
};

#endif // GUERRERO_H
