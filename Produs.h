#include<iostream>

#ifndef PRODUS_H_INCLUDED
#define PRODUS_H_INCLUDED

class Produs {

    std::string nume;
    double pret;
    bool status; //true="disponibil" sau false="indisponibil"
    bool alcool; //true = produsul contine alcool, false = nu contine alcool

public:

    Produs(const std::string, const double, const bool, const bool);

    ~Produs() = default;

    // void afiseazaStoc(); //afiseaza daca produsul este disponibil sau nu
    // void afiseazaPret(); //afiseaza pretul
    std::string afiseazaNume(); //returneaza numele produsului
    double getPret(); //returneaza pretul produsului
    bool getStatus(); //returneaza statusul produsului
    bool getAlcool(); //returneaza valoarea variabilei alcool

};


#endif // PRODUS_H_INCLUDED
