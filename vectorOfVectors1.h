#include <iostream>
#include "vectorNd.h"
#pragma once
#define N 3

using namespace std;
//G g K k q

class VectorOfVectors1 {
    VektorNd vektory[N];
    int size;

public:

    VectorOfVectors1();
    VectorOfVectors1(const VektorNd _vektory[], int _size); //deklaracja konstruktora zwyklego
    VectorOfVectors1(const VectorOfVectors1& oryginal); //deklaracja konstruktora kopiuj¹cego
    ~VectorOfVectors1();

    void wypisz1(ostream & out = cout){
        out <<endl;
        out << "        Jestem wektorem klasy VectorOfVectors1 pod adresem: " << this <<endl;
        out << "        Moj wymiar to: " << size << endl;
        out << "        A elementy: ";
        for(int i=0;i<size;i++)
        vektory[i].wypisz();
        out << endl;
    }

    VectorOfVectors1& operator=(const VectorOfVectors1& right){ //implementacja operatora przypisania
        cout<<"   Nastapilo skopiowanie wektora VectorOfVectors1 poprzez wykorzystanie operatora przypisania"<<endl<<endl;
        for(int i=0;i<size;i++)
        vektory[i] = right.vektory[i];
        return *this;
        }

};
