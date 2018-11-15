#include <iostream>
#include"menucivilizacion.h"
#include "guerrero.h"
#include "barco.h"

using namespace std;

int main()
{
    //MenuCivilizacion m;
    Guerrero g;
    Guerrero g2;
    Guerrero g3;
    Barco b;
    g.setId(1);
    g.setSalud(1);
    g.setEscudo(1);
    g.setFuerza(1);
    //g.setTipoGuerrero("paladin");

    g2.setId(2);
    g2.setSalud(2);
    g2.setEscudo(2);
    g2.setFuerza(2);

    g3.setId(3);
    g3.setSalud(3);
    g3.setEscudo(3);
    g3.setFuerza(3);

    b.agregarGuerrero(g);
    b.agregarGuerrero(g2);
    b.agregarGuerrero(g3);

    Guerrero tope = b.topeGuerreros();
    cout<<"Tope: "<<tope.getId()<<endl;

    b.eliminarGuerrero();
    Guerrero tope2 = b.topeGuerreros();
    cout<<"Tope: "<<tope2.getId()<<endl;
    return 0;
}
