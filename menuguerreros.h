#ifndef MENUGUERREROS_H
#define MENUGUERREROS_H
#include "barco.h"

class MenuGuerreros
{
private:
    Barco *barco;
    int id;
public:
    MenuGuerreros(Barco *b);
    void agregar(Barco *b);
    void mostrarUltimo();
    void eliminar();
    void mostrarTodos();
};

#endif // MENUGUERREROS_H
