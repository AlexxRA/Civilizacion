#ifndef MENUCIVILIZACION_H
#define MENUCIVILIZACION_H

#include "civilizacion.h"
#include "menualdeanos.h"
#include <iostream>
#include <list>
#include "aldeano.h"
class MenuCivilizacion
{
private:
    list<Civilizacion> civ;//Lista de civilizaciones
    Civilizacion nuevaCivilizacion();

public:
    MenuCivilizacion();
    void agregar();
    void buscar ();
    void eliminar();
    void ordenar();
    void mostrar();
    void recuperar();
    void respaldar(list<Civilizacion> &listaCiv);

//    Aldeano& operator[](int i){
//        for(auto it=civ.begin(); it!=civ.end(); it++){
//            Civilizacion &c=*it;
//            Aldeano &a = c.aldeanos[i];
//            return a;
//        }
//    }
//    Civilizacion& operator[](int i){
//        for(auto it=civ.begin(); it!=civ.end(); it++){
//            Civilizacion&c = *it;
//            return c.aldeanos[i];
//        }

//    }
};

#endif // MENUCIVILIZACION_H
