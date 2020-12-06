//
// Created by Ana on 06-Dec-20.
//
#include<iostream>
#ifndef TEMA2_PRODUS_H
#define TEMA2_PRODUS_H


class Produs {

    protected:
        friend class Mancare;
        friend class Bautura;
        std::string nume;
        double pret;
        bool status; //true="disponibil" sau false="indisponibil"
        bool alcool; //true = produsul contine alcool, false = nu contine alcool

    public:

        Produs();

        Produs(const std::string, const double, const bool, const bool);

        ~Produs() = default;

        // void afiseazaStoc(); //afiseaza daca produsul este disponibil sau nu
        // void afiseazaPret(); //afiseaza pretul
        std::string getNume(); //returneaza numele produsului
        friend std::istream& operator>>(std::istream&, Produs&);
        friend std::ostream& operator<<(std::ofstream&, Produs&);
        double getPret(); //returneaza pretul produsului
        bool getStatus(); //returneaza statusul produsului
        bool contineAlcool(); //returneaza valoarea variabilei alcool

};


#endif //TEMA2_PRODUS_H
