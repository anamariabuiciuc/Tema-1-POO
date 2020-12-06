//
// Created by Ana on 06-Dec-20.
//
#include<iostream>
#include<vector>
#include "Produs.h"

#ifndef TEMA2_COMANDA_H
#define TEMA2_COMANDA_H


class Comanda {

    int nr_comanda;
    int nr_produse;
    std::vector<Produs> produse;

public:
    Comanda();

    Comanda(const int, const int, std::vector<Produs>);

    ~Comanda() = default;

    friend std::istream& operator>>(std::istream&, Comanda&);
    Comanda &operator=(const Comanda&);
    friend std::ostream& operator<<(std::ostream&, Comanda&);

    int getNrComanda();

    //void afisComanda(); //afiseaza comanda

    int VerifDisp(); //verifica daca comanda se poate procesa
    double PretComanda();

};


#endif //TEMA2_COMANDA_H
