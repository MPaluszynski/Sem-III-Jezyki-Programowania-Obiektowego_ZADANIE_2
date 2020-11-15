#include <iostream>
#include "vectorNd.h"
#include "vectorOfVectors1.h"
#include "vectorOfVectors2.h"

using namespace std;

/*KONSTRUKTORY I DESTRUKTOR KLASY VectorOfVectors1*/


VectorOfVectors1::VectorOfVectors1(){
    cout << "   Wywolano konstruktor PUSTY VectorOfVectors1 -> utworzono: "<< this <<endl<<endl;
    size = 3;
}


VectorOfVectors1::VectorOfVectors1(const VektorNd _vektory[], int _size){
    cout << "   Wywolano konstruktor ZWYKLY VectorOfVectors1 -> utworzono: "<< this <<endl<<endl;
    size = _size;
    for(int i=0;i<size;i++)
    vektory[i] = _vektory[i];
}

VectorOfVectors1::VectorOfVectors1(const VectorOfVectors1& oryginal){
    cout << "   Wywolano konstruktor KOPIUJACY VectorOfVectors1 -> utworzono: " <<endl<<endl;
    size = oryginal.size;
    for(int i=0;i<size;i++)
    vektory[i] = oryginal.vektory[i];
}

VectorOfVectors1::~VectorOfVectors1(){
    cout << "   Wywolano destruktor VectorOfVectors1 -> zwalniam pamiec: " << this <<endl<<endl;
    cout << "   Destruktor VectorOfVectors1 -> ZAKONCZONO" <<endl<<endl;
    }



