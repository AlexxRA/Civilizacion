#include "menualdeanos.h"

MenuAldeanos::MenuAldeanos(Civilizacion &m)
{
    civ = m;
    int opc;
    do{
        system("cls");
        cout << "1) Nombrar civilizacion" << endl
             << "2) Agregar aldeano" << endl
             << "3) Crear aldeanos" << endl
             << "4) Primer aldeano" << endl
             << "5) Ultimo aldeano" << endl
             << "6) Ordenar" << endl
             << "7) Eliminar aldeano" << endl
             << "8) Resumen" << endl
             << "0) Salir" << endl;
        cin >> opc;
        switch (opc) {
        case 1:
            system("cls");
            nombreCivilizacion();
            system("pause");
            break;
        case 2:
            system("cls");
            agregar();
            system("pause");
            break;
        case 3:
            system("cls");
            crear();
            system("pause");
            break;
        case 4:
            system("cls");
            civ.primerAldeano();
            system("pause");
            break;
        case 5:
            system("cls");
            civ.ultimoAldeano();
            system("pause");
            break;
        case 6:
            system("cls");
            civ.ordenarAldeanos();
            system("pause");
            break;
        case 7:
            system("cls");
            eliminar();
            system("pause");
            break;
        case 8:
            system("cls");
            resumen();
            system("pause");
            break;

        }
    }while(opc!=0);
    m=civ;
}

void MenuAldeanos::nombreCivilizacion()
{
    string nom;
    cout << "Nombre de la civilizacion: ";
    cin.ignore();
    getline(cin, nom);
    civ.setNombre(nom);
}

void MenuAldeanos::agregar()
{
    Aldeano a;
    string s;
    double d;
    char c;

    cout << "Nombre: ";
    cin.ignore();
    getline(cin, s);
    a.setNombre(s);

    cout << "Edad: ";
    cin >> d;
    a.setEdad(d);

    cout << "Genero (H/M): ";
    cin >> c;
    a.setGenero(c);

    cout << "Salud: ";
    cin >> d;
    a.setSalud(d);

    civ.agregarAldeano(a);
}

void MenuAldeanos::crear(){
    Aldeano a;
    string s;
    double d;
    char c;

    cout << "Nombre: ";
    cin.ignore();
    getline(cin, s);
    a.setNombre(s);

    cout << "Edad: ";
    cin >> d;
    a.setEdad(d);

    cout << "Genero (H/M): ";
    cin >> c;
    a.setGenero(c);

    cout << "Salud: ";
    cin >> d;
    a.setSalud(d);

    size_t n;
    cout << "Cantidad a crear: ";
    cin >> n;
    cin.ignore();
    civ.crearAldeanos(n,a);

}

void MenuAldeanos::eliminar(){
    string s;

    cout << endl << "Nombre: ";
    cin.ignore();
    getline(cin, s);

    civ.eliminarAldeano(s);
}

void MenuAldeanos::resumen(){
    cout<<"Nombre de la civilizacion: "<<civ.getNombre()<<endl;
    civ.poblacion();
    cout<<"Aldeanos: "<<endl;
    civ.resumen();

    //listaCiv.push_back(civ);
}
