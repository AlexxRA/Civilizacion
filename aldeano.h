#ifndef ALDEANO_H
#define ALDEANO_H
#include <iostream>

using namespace std;

class Aldeano
{
    private:
        string nombre;
        float edad;
        char genero;
        float salud;

    public:
        Aldeano();
        string getNombre() const;
        void setNombre(const string &value);
        float getEdad() const;
        void setEdad(float value);
        char getGenero() const;
        void setGenero(char value);
        float getSalud() const;
        void setSalud(float value);


    friend ostream &operator<<(ostream &out, Aldeano &a){
    out << "Nombre: "<<a.getNombre() << endl
        << "Edad: "<<a.getEdad() << endl
        << "Genero: "<<a.getGenero() << endl
        << "Salud: "<<a.getSalud();
    return out;
    }

    bool operator<(Aldeano &a) const {
        return salud < a.salud;
    }
};

#endif // ALDEANO_H
