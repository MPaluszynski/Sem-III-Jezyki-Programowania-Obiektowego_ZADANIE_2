#include <iostream>
#pragma once
using namespace std;

//G g K k q

class VektorNd {
    double *_liczby; //pole ze wskaünikiem na liczby
    int _wymiar; //wymiar wektora
public:

/*KONSTRUKTORY I DESTRUKTOR KLASY VektorNd*/

    VektorNd (); //deklaracja konstruktora bezparametrowego

    VektorNd (const double liczby[],int wymiar); //deklaracja konstruktora parametrowego

    VektorNd(const VektorNd& oryginal); //deklaracja konstruktora kopiujπcego

    ~VektorNd(); //deklaracja destruktora

/*METODY KLASY VektorNd*/

    void getCoefs(double liczby[]); //metoda publiczna

    double getCoef(int index);

    int getDim();

    void setCoef(double wartosc,int index);


/*PRZECIAZANE OPERATORY KLASY VektorNd*/

    void wypisz(ostream & out = cout){
        out <<endl;
        out << "        Jestem wektorem klasy VektorNd pod adresem: " << this <<endl;
        out << "        Moj wymiar to: " << _wymiar << endl;
        out << "        A elementy: ";
        for(int i=0;i<_wymiar;i++)
        out <<"["<<i<<"]=" << _liczby[i]<<" ";
        out << endl;
    }

    VektorNd& operator=(const VektorNd& right){ //implementacja operatora przypisania
        if(_wymiar!=right._wymiar){ //gdy zgodne wymiary nie potrzeba realokowaÊ pamiÍci
            delete[] _liczby;
            _liczby = new double[right._wymiar]; //alokacja pamiÍci dla nowego wymiaru
            _wymiar=right._wymiar;
        }
        for(int i=0;i<_wymiar;i++)
        _liczby[i] = right._liczby[i];
        return *this;
        }

};
