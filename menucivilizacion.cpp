#include "menucivilizacion.h"
#include "menualdeanos.h"
#include "civilizacion.h"
#include "aldeano.h"
#include <iostream>
#include <list>
#include <algorithm>
#include <iomanip>
#include "menubarcos.h"


Civilizacion MenuCivilizacion::nuevaCivilizacion()
{
    Civilizacion c;
    string nombre;

    cout << "Nombre de civilizacion: ";
    getline(cin, nombre);
    c.setNombre(nombre);

    return c;
}

MenuCivilizacion::MenuCivilizacion()
{
    string opc;

    while(true){
        system("cls");
        cout << "1.- Agregar civilizacion" << endl;
        cout << "2.- Buscar civilizacion" << endl;
        cout << "3.- Eliminar civilizacion" << endl;
        cout << "4.- Ordenar civilizaciones" << endl;
        cout << "5.- Mostrar civilizaciones" << endl;
        cout << "6.- Respaldar" << endl;
        cout << "7.- Recuperar" << endl;
        cout << "0.- Salir" << endl;

        getline(cin, opc);

        if(opc=="1"){
            agregar();
            system("pause");

        }
        else if(opc=="2"){
            system("cls");
            buscar();
            system("pause");
        }
        else if(opc=="3"){
            system("cls");
            eliminar();
            system("pause");
        }
        else if(opc=="4"){
            system("cls");
            ordenar();
            system("pause");
        }
        else if(opc=="5"){
            //system("cls");
            mostrar();
        }
        else if(opc=="6"){
            system("cls");
            respaldar(civ);
            system("pause");
        }
        else if(opc=="7"){
            system("cls");
            recuperar();
            system("pause");
        }
        else if(opc=="0"){
            break;
        }
        else{
            cout << "Opcion invalida..." << endl;
        }
    }
}

void MenuCivilizacion::agregar()
{
    string s;
    while (true) {
        system("cls");
        cout << "1.- Agregar al inicio" << endl
             << "2.- Agregar al final" << endl
             << "0.- Regresar"<<endl;
        getline(cin, s);

        if (s == "1") {
            civ.push_front(nuevaCivilizacion());

        } else if (s == "2") {
            civ.push_back(nuevaCivilizacion());

        } else if (s == "0") {
            return;

        } else {
            cout << "Opcion invalida..." << endl;
        }
    }
}

void MenuCivilizacion::buscar()
{
    string s;
    int o;
    cout << "Nombre de la civilizacion: ";
    getline(cin, s);

    cout<<"1.- Aldeanos:"<<endl;
    cout<<"2.- Barcos:"<<endl;
    cin>>o;
    switch (o) {
    case 1:
        for (auto &it : civ) {
            if (it.getNombre() == s) {
                MenuAldeanos m(it);
                return;
            }
        }
        cout << "No existe civilizacion..." << endl;
        break;
    case 2:
        for (auto &it : civ) {
            if (it.getNombre() == s) {
                MenuBarcos m(it);
                return;
            }
        }
        cout << "No existe civilizacion..." << endl;

        break;
    default:
        break;
    }


}

void MenuCivilizacion::eliminar()
{

    if (civ.empty()) {
        cout << "No hay civilizaciones..." << endl;
        return;
    }
    while (true) {
        string s,opc;
        size_t x;
        system("cls");
        cout << "1.- Eliminar por nombre" << endl
             << "2.- Eliminar por poblacion menor a x" << endl
             << "3.- Eliminar por salud menor a 20" << endl
             << "0.- Regresar"<<endl;
        getline(cin, opc);

        if (opc == "1") {
            cout << "Nombre de la civilizacion: ";
            getline(cin, s);

            for (auto it = civ.begin(); it != civ.end(); ++it) {
                if (it->getNombre() == s) {
                    cout<<"Civilizacion "<<it->getNombre()<<" a eliminar"<<endl;
                    civ.erase(it);
                    cout << "Civilizacion eliminada..." << endl;
                    return;
                }
            }
            cout << "Civilizacion no encontrada." << endl;
            system("pause");
        } else if (opc == "2") {
            cout << "Poblacion: ";
            cin>>x;
            civ.remove_if([x](Civilizacion &s){return s.getPob()<x;});
            cout << "Civilizaciones eliminadas" << endl;
            system("pause");
        } else if (opc == "3") {
            double sp=20;
            civ.remove_if([sp](Civilizacion &s){return s.getSaludPromedio()<sp;});
            cout << "Civilizaciones eliminadas" << endl;
            system("pause");
        } else if (opc == "0") {
            return;
        } else {
            cout << "Opcion invalida." << endl;
        }
    }
}

void MenuCivilizacion::ordenar()
{

    string s;
    while (true) {
        system("cls");
        cout << "1.- Ordenar por nombre (ascendete)" << endl
             << "2.- Ordenar por poblacion (descendente)" << endl
             << "3.- Ordenar por salud promedio (descendete)" << endl
             << "0.- Regresar"<<endl;
        getline(cin, s);

        if (s == "1") {
            system("cls");
            civ.sort([](const Civilizacion &c1, const Civilizacion &c2) {
                return c1.getNombre() < c2.getNombre();
            });
            system("pause");

        } else if (s == "2") {
            system("cls");
            civ.sort([](Civilizacion &c1, Civilizacion &c2) {
                return c1.getPob() > c2.getPob();
            });
            system("pause");

        } else if (s == "3") {
            system("cls");
            civ.sort([](Civilizacion &c1, Civilizacion &c2) {
                return c1.getSaludPromedio() > c2.getSaludPromedio();
            });
            system("pause");

        } else if (s == "0") {
            return;

        } else {
            system("cls");
            cout << "Opcion invalida..." << endl;
            system("pause");
        }
    }

}

void MenuCivilizacion::mostrar()
{
    if(!civ.empty()){
        for(auto it = civ.begin(); it != civ.end(); it++){
            Civilizacion &s = *it;
            //system("cls");
            cout<<endl<<"Nombre de la civilizacion: "<<s.getNombre()<<endl;
            s.poblacion();
            cout<<"Salud promedio: "<<s.getSaludPromedio()<<endl;
            s.resumen();
            cout<<endl;
            system("pause");
        }
        return;
    }

    cout<<"No hay civilizaciones..."<<endl;
    system("pause");
}

void MenuCivilizacion::recuperar()
{
    ifstream file("civilizaciones.txt",ios::in);
    while (!file.eof()) {
        string linea;
        Civilizacion c;
        Aldeano a;
        float f;
        getline(file,linea);
        if (file.eof()) {
            break;
        }
        c.setNombre(linea);

        ifstream fileAld(c.getNombre()+".txt",ios::in);
        while (!fileAld.eof()) {

            getline(fileAld,linea);
            if (fileAld.eof()) {
                break;
            }
            a.setNombre(linea);

            getline(fileAld,linea);
            f=stof(linea);
            a.setEdad(f);

            getline(fileAld,linea);
            a.setGenero(linea[0]);

            getline(fileAld,linea);
            f=stof(linea);
            a.setSalud(f);

            c.agregarAldeano(a);
        }
        civ.push_back(c);
    }
}

void MenuCivilizacion::respaldar(list<Civilizacion> &listaCiv)
{
    ofstream file("civilizaciones.txt",ios::out);
    if(file.is_open()){
        for(auto it=listaCiv.begin(); it!=listaCiv.end(); it++){
            Civilizacion&c = *it;
            file<<c.getNombre()<<endl;

            ofstream fileAld(c.getNombre()+".txt",ios::out);
            for(int i=0; i<c.getPob();i++){
                Aldeano a=c.aldeanos[i];
                fileAld<<a.getNombre()<<endl;
                fileAld<<a.getEdad()<<endl;
                fileAld<<a.getGenero()<<endl;
                fileAld<<a.getSalud()<<endl;

            }
            fileAld.close();
        }
        file.close();
    }
}
