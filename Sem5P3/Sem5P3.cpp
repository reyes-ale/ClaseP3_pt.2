
#include <iostream>
using namespace std;

class Maestro {
private:
    string m_nombre;

public:
    Maestro(string nombre) : m_nombre(nombre) {}
    string getNombre() {
        return m_nombre;
    }
};

class Departamento {
private:
    Maestro *m_maestro;

public:
    Departamento(Maestro* maestro = nullptr) : m_maestro(maestro){}

};

class Tiempo {

};

int main()
{
    Maestro* maestro = new Maestro("Martin");
    { Departamento departamento(maestro); }

    cout << maestro->getNombre() << " todavia existe!";
    delete maestro;
    return 0; 

}
