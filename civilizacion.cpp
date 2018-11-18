#include "civilizacion.h"
#include<iostream>
#include <iomanip>
using namespace std;

string Civilizacion::getNombre() const
{
    return nombre;
}

void Civilizacion::setNombre(const string &value)
{
    nombre = value;
}

int Civilizacion::getPob() const
{
    return aldeanos.size();
}

double Civilizacion::getSaludPromedio()
{
    double saludPromedio;
    if (!aldeanos.empty()){
        for (size_t i = 0; i < aldeanos.size(); ++i) {
            saludPromedio += aldeanos[i].getSalud();
        }
        saludPromedio=saludPromedio/aldeanos.size();
    }
    else{
        saludPromedio=0;
    }
    return saludPromedio;
}

Aldeano Civilizacion::getAldeano(int i)
{
    return aldeanos[i];
}

void Civilizacion::agregarBarco(Barco *b)
{
    puerto.push_back(b);
}

void Civilizacion::mostrarBarcos()
{
    if (puerto.size() == 0) {
        cout << "Tu civilizacion no tiene barcos." << endl;

    }
    else{
        cout << setw(5) << "ID|" <<
                setw(10) << "Combustible|" <<
                setw(10) << "Velocidad|" <<
                setw(10) << "Armadura|" <<
                setw(10) << "Cantidad de guerreros" << endl;
        for(auto it = puerto.begin(); it != puerto.end(); it++){
            Barco *b =*it;
            cout<<setw(5)<<b->getId()<<
                  setw(10)<<b->getCombustible()<<
                  setw(10)<<b->getVelocidad()<<
                  setw(10)<<b->getArmadura()<<
                  setw(10)<<b->getGuerreros()<<endl;
        }
    }
}

void Civilizacion::eliminarBarco(int id)
{

}

void Civilizacion::buscarBarco(int id)
{

}

Civilizacion::Civilizacion()
{

}

void Civilizacion::agregarAldeano(const Aldeano &a)
{
    aldeanos.push_back(a);
}

void Civilizacion::crearAldeanos(const size_t n, const Aldeano &a)
{
    aldeanos = vector<Aldeano>(n, a);
}

void Civilizacion::primerAldeano()
{
    if (aldeanos.empty()) {
        cout << "No hay aldeanos." << endl;
        return;
    }
    else{
        cout << aldeanos.front() << endl;
    }

}

void Civilizacion::ultimoAldeano()
{
    if (aldeanos.empty()) {
        cout << "No hay aldeanos..." << endl;
        return;
    }
    else{
        cout << aldeanos.back() << endl;
    }
}

void Civilizacion::ordenarAldeanos()
{
    sort(aldeanos.begin(), aldeanos.end());
}

void Civilizacion::eliminarAldeano(const string &nombre)
{
    if (aldeanos.empty()) {
        cout << "No hay aldeanos..." << endl;
        return;
    }
    else{
        auto it = aldeanos.begin();
        for (size_t i = 0; i < aldeanos.size(); ++i) {
            if (aldeanos[i].getNombre() == nombre) {
                aldeanos.erase(it + i);
                cout << "Aldeano eliminado..." << endl;
                return;
            }
        }
    }

    cout << "Aldeano no encontrado..." << endl;
}

void Civilizacion::poblacion()
{
    cout << "Poblacion: " << aldeanos.size() <<" aldeanos"<< endl;
}

void Civilizacion::resumen()
{
    if (aldeanos.size() == 0) {
        cout << "Tu civilizacion no tiene aldeanos." << endl;

    }
    else{
        for (size_t i = 0; i < aldeanos.size(); ++i) {
            Aldeano &a = aldeanos[i];
            cout<<endl<< a <<endl;
        }
    }

}
