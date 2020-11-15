#include <iostream>
#include "vectorNd.h"
#include "vectorOfVectors1.h"
#include "vectorOfVectors2.h"

using namespace std;

//_________________________________________________________________________________________________________

/*KONSTRUKTORY I DESTRUKTOR KLASY VektorNd*/

VektorNd::VektorNd(){
        cout << "       Wywolano konstruktor PUSTY VektorNd -> utworzono: "<< this <<endl<<endl;
        _liczby = new double[1];
        _wymiar = 1;
    }

VektorNd::VektorNd (const double liczby[],int wymiar){ //konstruktor parametrowy
        cout << "       Wywolano konstruktor ZWYKLY VektorNd -> utworzono: "<< this <<endl<<endl;
        _liczby = new double[wymiar];
        _wymiar = wymiar;
        for(int i=0;i<_wymiar;i++)
        _liczby[i] = liczby[i];
    }

VektorNd::VektorNd(const VektorNd& oryginal){ //konstruktor kopiuj¹cy
        cout << "       Wywolano konstruktor KOPIUJACY VektorNd -> utworzono: "<< this <<endl<<endl;
        _liczby = new double[oryginal._wymiar];
        _wymiar = oryginal._wymiar;
        for(int i=0;i<_wymiar;i++)
        _liczby[i] = oryginal._liczby[i];
    }

VektorNd::~VektorNd(){
    cout << "       Wywolano destruktor VektorNd -> zwalniam pamiec: " << this <<endl<<endl;
    delete[] _liczby;
    cout << "       Destruktor VektorNd -> ZAKONCZONO" <<endl<<endl;
    }

/*METODY KLASY VektorNd*/

void VektorNd::getCoefs(double liczby[]){ //metoda publiczna
    for(int i=0;i<_wymiar;i++)
    liczby[i] = _liczby[i];
}

double VektorNd::getCoef(int index){ //pomocznicza metoda
    return _liczby[index];
    }

int VektorNd::getDim(){ //pomocznicza metoda
    return _wymiar;
    }

void VektorNd::setCoef(double wartosc,int index){
    _liczby[index] = wartosc;
    }



