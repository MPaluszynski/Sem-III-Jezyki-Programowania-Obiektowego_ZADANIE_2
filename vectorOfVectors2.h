#include <iostream>
#include "vectorNd.h"
#pragma once
using namespace std;


class VectorOfVectors2 {

public:
    VektorNd *vektory;
    int size;

    VectorOfVectors2 ();
    VectorOfVectors2(const VektorNd _vektory[], int _size); //deklaracja konstruktora zwyklego
    VectorOfVectors2(const VectorOfVectors2& oryginal); //deklaracja konstruktora kopiuj¹cego
    ~VectorOfVectors2();

    void wypisz2(ostream & out = cout){
        out <<endl;
        out << "        Jestem wektorem klasy VectorOfVectors2 pod adresem: " << this <<endl;
        out << "        Moj wymiar to: " << size << endl;
        out << "        A elementy: ";
        for(int i=0;i<size;i++)
        vektory[i].wypisz();
        out << endl;
    }

    VectorOfVectors2& operator=(const VectorOfVectors2& right){ //implementacja operatora przypisania

        cout<<"   Nastapilo skopiowanie wektora VectorOfVectors2 poprzez wykorzystanie operatora przypisania"<<endl<<endl;

        if(size!=right.size){ //gdy zgodne wymiary nie potrzeba realokowaæ pamiêci
            delete[] vektory;
            vektory = new VektorNd[right.size]; //alokacja pamiêci dla nowego wymiaru
            size=right.size;
        }
        for(int i=0;i<size;i++)
        vektory[i] = right.vektory[i];
        return *this;
        }

    friend istream &operator >> (istream &input, VectorOfVectors2 &vector);
    friend ostream& operator<<(ostream& output, VectorOfVectors2& vector);
};
