

#include <stdexcept>
#include <iostream>
using namespace std;

class Tiempo {
    unsigned int hora, minuto, segundo;
public:
    explicit Tiempo(int hora = 0, int minuto = 0, int segundo = 0) {
        setT(hora, minuto, segundo);
    }
    void setT(int hora, int minuto, int segundo) {
        if ((hora >= 0 && hora < 24) && (minuto >= 0 && minuto < 60) && (segundo >= 0 && segundo < 60)) {
            this->hora = hora;
            this->minuto = minuto;
            this->segundo = segundo;
            this->hora = hora; 

        }
        else {
            throw invalid_argument("Error");
        }
        
        
    }
    unsigned int obtenerHora() const {
        return hora;
    }

    void establecerHora(int hora) {
        if (hora >= 0 && hora < 24) {
            this->hora = hora; 
        }
        else {
            throw invalid_argument("hora debe estar entre 0 y 23");
        }
    }
};

class Cuenta {
    int x;
    friend void establecerX(Cuenta&, int);
    public: 
     Cuenta() : x( 0 ){}
     void imprimir() const { cout << x << endl; }
};

void establecerX(Cuenta& c, int val) {
    c.x = val;
}

void establecerY(Cuenta& c, int val) {
    c.x = val;
}


int main()
{
    /*Tiempo despertar(6, 45, 0);
    const Tiempo mediodia(12, 0, 0);
    despertar.establecerHora(18); mediodia.establecerHora(12);
    despertar.obtenerHora(); mediodia.obtenerHora();
    return 0;*/

    Cuenta contador;
    cout << "contador.c despues de crear la instancia: ";
    contador.imprimir();
    establecerX(contador, 8);
    cout << "contador.x despues de llamar a la funcion freind establecerX:";
    contador.imprimir();
    establecerY(contador, 9); 
}