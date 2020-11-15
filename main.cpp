#include <iostream>
#include "vectorNd.h"
#include "vectorOfVectors1.h"
#include "vectorOfVectors2.h"

using namespace std;

int main()
{

    cout<<endl<< "1.0 TWORZYMY 3 WEKTORY KLASY VectorNd I PRZYPISUJEMY DO TABLICY WEKTOROW"<<endl<<endl;

    const double wartosci[] = {1,2,3};

    VektorNd v1(wartosci,3);
    VektorNd v2(v1);
    VektorNd v3(v1);

    v2.setCoef(4,0);
    v2.setCoef(5,1);
    v2.setCoef(6,2);

    v3.setCoef(7,0);
    v3.setCoef(8,1);
    v3.setCoef(9,2);

    VektorNd tabOfVectors[3];

    tabOfVectors[0]=v1;
    tabOfVectors[1]=v2;
    tabOfVectors[2]=v3;

    cout<<"       Wypisanie elementow utworzonej tablicy wektorow: "<<endl<<endl;

    for(int x=0 ; x<3 ;x++){
        cout<<"       Element "<< x+1<<":";
        tabOfVectors[x].wypisz();
    }

    cout<<endl<<"       Adres utworzonej tablicy wektorow: "<<&tabOfVectors<<endl<<endl;

    cout<<endl<< "2.0 TWORZYMY WEKTORY KLASY VectorOfVectors1 I CZYTAMY ICH ADRESY"<<endl<<endl;

    VectorOfVectors1 vov11;
    VectorOfVectors1 vov12(tabOfVectors,3);
    VectorOfVectors1 vov13(vov12);

    vov11=vov13;

    vov11.wypisz1();

    cout<<endl<< "3.0 TWORZYMY WEKTORY KLASY VectorOfVectors2 I CZYTAMY ICH ADRESY"<<endl<<endl;

    VectorOfVectors2 vov21;

    VectorOfVectors2 vov22(tabOfVectors,3);

    VectorOfVectors2 vov23(vov22);

    vov21 = vov23;

    vov21.wypisz2();

    VectorOfVectors2 vof;
    cin >> vof;
    cout <<vof;

    return 0;
}
