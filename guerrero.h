#ifndef GUERRERO_H
#define GUERRERO_H
#include <iostream>
#include <iomanip>
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

    friend ostream& operator <<(ostream &o, const Guerrero &g){

        o<<setw(5)<<g.getId()<<
              setw(10)<<g.getSalud()<<
              setw(10)<<g.getFuerza()<<
              setw(10)<<g.getEscudo()<<
              setw(10)<<g.getTipoGuerrero()<<endl;
        return o;
    }

};

#endif // GUERRERO_H
