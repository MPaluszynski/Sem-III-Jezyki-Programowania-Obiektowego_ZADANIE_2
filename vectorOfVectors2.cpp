#include <iostream>
#include "vectorNd.h"
#include "vectorOfVectors1.h"
#include "vectorOfVectors2.h"

using namespace std;

/*KONSTRUKTORY I DESTRUKTOR KLASY VectorOfVectors2*/

VectorOfVectors2::VectorOfVectors2(){
    cout << "   Wywolano konstruktor PUSTY VectorOfVectors2 -> utworzono: "<< this <<endl<<endl;
    vektory = new VektorNd[1];
    size = 1;
}

VectorOfVectors2::VectorOfVectors2(const VektorNd _vektory[], int _size){
    cout << "   Wywolano konstruktor ZWYKLY VectorOfVectors2 -> utworzono: "<< this <<endl<<endl;
    vektory = new VektorNd[_size];
    size = _size;
    for(int i=0;i<size;i++)
    vektory[i] = _vektory[i];
}

VectorOfVectors2::VectorOfVectors2(const VectorOfVectors2& oryginal){ //konstruktor kopiuj¹cy
        cout << "   Wywolano konstruktor KOPIUJACY VectorOfVectors2 -> utworzono: "<< this <<endl<<endl;
        vektory = new VektorNd[oryginal.size];
        size = oryginal.size;
        for(int i=0;i<size;i++)
        vektory[i] = oryginal.vektory[i];
    }

VectorOfVectors2::~VectorOfVectors2(){
    cout << "   Wywolano destruktor VectorOfVectors2 -> zwalniam pamiec: " << this <<endl<<endl;
    delete[] vektory;
    cout << "   Destruktor VectorOfVectors2 -> ZAKONCZONO" <<endl<<endl;
    }

istream& operator>>(istream & in, VektorNd& vektorK){
    int rozm =0;
    in >> rozm;
    double *tab = new double[rozm];

    for(int i = 0; i<rozm; i++) {
        cout << "Podaj element [" << i <<"] vektora VektorNd \t";
        in >> tab[i];
    }
    vektorK = VektorNd(tab, rozm);
    delete [] tab;
    return in;
}

istream& operator>>(istream& input, VectorOfVectors2& vector)
{
    cout << "Podaj rozmiar vektora VectorOfVectors2 \t";
    input >> vector.size;
    vector.vektory = new VektorNd[vector.size];
    for(int i=0; i<vector.size; i++)
    {
        cout << "Podaj rozmiar vektora VektorNd[" << i <<"] \t";
        input >> vector.vektory[i];
    }

    return input;
}

ostream& operator<<(ostream& output, VectorOfVectors2& vector)
{
    vector.wypisz2();
    return output;
}




