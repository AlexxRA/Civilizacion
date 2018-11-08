#ifndef MENU_H
#define MENU_H
#include "civilizacion.h"
#include "menucivilizacion.h"
#include <list>

class MenuAldeanos
{

private:
    Civilizacion civ;
public:
    MenuAldeanos(Civilizacion &m);
    void nombreCivilizacion();
    void agregar();
    void crear();
    void eliminar();
    void resumen();

};

#endif // MENU_H
