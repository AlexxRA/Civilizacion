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

};

#endif // MENUCIVILIZACION_H
