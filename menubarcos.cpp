#include "menubarcos.h"

MenuBarcos::MenuBarcos(Civilizacion &m)
{
    civ = m;
    id=1;
    int opc;
    do{
        system("cls");
        cout << "1) Agregar barcos" << endl
             << "2) Mostrar barcos" << endl
             << "3) Buscar barco" << endl
             << "4) Eliminar barco" << endl
             << "0) Salir" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            agregar(civ);
            system("pause");
            break;
        case 2:
            system("cls");
            civ.mostrarBarcos();
            system("pause");
            break;
        case 3:
            system("cls");
            buscar();
            system("pause");
            break;
        case 4:
            system("cls");
            eliminar();
            system("pause");
            break;

        }
    }while(opc!=0);
    m=civ;
}

void MenuBarcos::agregar(Civilizacion &c)
{
    float comb;
    Barco *b = new Barco();

    b->setId(id++);

    cout<<"Combustible: ";
    cin>>comb;
    b->setCombustible(comb);
    cin.ignore();

    b->setArmadura(0);
    b->setVelocidad(0);

    c.agregarBarco(b);
}

void MenuBarcos::eliminar()
{
    int opc;
    int id;
    float comb;
    cout<<"1. Eliminar por ID"<<endl;
    cout<<"2. Eliminar por combustible menor a x"<<endl;
    cin>>opc;

    switch (opc){
        case 1:
            cout<<"ID del barco: ";
            cin>>id;
            civ.eliminarBarco(id);
            break;

        case 2:
            cout<<"Combustible: ";
            cin>>comb;
            civ.eliminarBarco(comb);
            break;
    }
}

void MenuBarcos::buscar()
{
    int id;
    cout << "ID del barco: ";
    cin>>id;

    civ.buscarBarco(id);
}
