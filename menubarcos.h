#ifndef MENUBARCOS_H
#define MENUBARCOS_H
#include "civilizacion.h"
#include "menucivilizacion.h"
#include <list>


class MenuBarcos
{
private:
    Civilizacion civ;
    int id;
public:
    MenuBarcos(Civilizacion &m);
    void agregar(Civilizacion &c);
    void eliminar();
    void buscar();
};

#endif // MENUBARCOS_H
