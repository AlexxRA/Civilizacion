#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
#include "aldeano.h"

class Civilizacion
{
    private:
        string nombre;


    public:
        vector<Aldeano> aldeanos;
        Civilizacion();
        void agregarAldeano(const Aldeano &a);
        void crearAldeanos(const size_t n, const Aldeano &a);
        void primerAldeano();
        void ultimoAldeano();
        void ordenarAldeanos();
        void eliminarAldeano(const string &nombre);
        void poblacion();
        void resumen();

        string getNombre() const;
        void setNombre(const string &value);

        int getPob() const;
        void setPob(int value);
        double getSaludPromedio();

        Aldeano getAldeano(int i);





};

#endif // CIVILIZACION_H
