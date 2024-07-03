
#include <iostream>
#include "Rectangulo.h"
using namespace std; 


#ifdef EUCLIDES


//class Rectangulo {
//    int m_ancho, m_alto;
//
//public: 
//    Rectangulo(int ancho = 0, int alto = 0)
//        //:m_ancho(ancho), m_alto(alto){}
//    {
//        m_ancho = ancho;
//        m_alto = alto; 
//    }
//    int getAnchura() const { 
//        return m_ancho; 
//    } //get
//
//    void setAnchura(int ancho) { 
//        m_ancho = ancho; 
//    } //set
//
//    int getAltura() const { 
//        return m_alto; 
//    } //get
//
//    void setAltura(int alto) { 
//        m_alto = alto; 
//    } //set
//
//} r(19,47);


class Euclides {

    int m_a, m_b, m_r;
    bool calcular = false;
    int mdc(int a, int b) const;

public:
    Euclides(int a = 1, int b = 2) {
        m_a = a;
        m_b = b; 
    }
    //Euclides(int a, int b);
    void fijarAB(int a, int b);
    int obtenerA() const { return m_a; };
    int obtenerB() const { return m_b; };
    int obtenerR();
};


int main() {
    Euclides euclides1;

    //Rectangulo r = new Rectangulo (19,47) // Java
    /*Rectangulo r(19, 47);
    r.setAltura(2 * r.getAnchura());
    r.setAnchura(2 * r.getAltura());
    cout << r.getAnchura() << " x " << r.getAltura() << endl;*/ 

    Ejemplo ejemplo(6); 
    return 0; 
#endif 
}

