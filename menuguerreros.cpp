#include "menuguerreros.h"
#include <iomanip>

MenuGuerreros::MenuGuerreros(Barco *b)
{
    barco = b;
    int opc;
    do{
        system("cls");
        cout << "1) Agregar guerrero" << endl
             << "2) Eliminar guerrero" << endl
             << "3) Mostrar ultimo guerrero" << endl
             << "4) Mostrar guerreros" << endl
             << "0) Salir" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            agregar(barco);
            system("pause");
            break;
        case 2:
            system("cls");

            system("pause");
            break;
        case 3:
            system("cls");
            mostrarUltimo();
            system("pause");
            break;
        case 4:
            system("cls");

            system("pause");
            break;

        }
    }while(opc!=0);
    b=barco;
}

void MenuGuerreros::agregar(Barco *b)
{
    Guerrero g;
    int i;
    float f;

    cout<<"ID: ";
    cin>>i;
    g.setId(i);

    cout<<"Salud: ";
    cin>>i;
    g.setSalud(i);

    cout<<"Fuerza: ";
    cin>>f;
    g.setFuerza(f);

    cout<<"Escudo: ";
    cin>>f;
    g.setEscudo(f);

    cout<<"Tipo de guerrero: ";
    cin>>i;
    g.setTipoGuerrero(i);

    b->agregarGuerrero(g);

}

void MenuGuerreros::mostrarUltimo()
{
    Guerrero g = barco->topeGuerreros();
    cout << setw(5) << "ID|" <<
            setw(10) << "Salud|" <<
            setw(10) << "Fuerza|" <<
            setw(10) << "Escudo|" <<
            setw(20) << "Tipo|" << endl;

    cout<<setw(5)<<g.getId()<<
          setw(10)<<g.getSalud()<<
          setw(10)<<g.getFuerza()<<
          setw(10)<<g.getEscudo()<<
          setw(10)<<g.getTipoGuerrero()<<endl;

}
