#include<iostream>
#include<vector>
#include "Produs.h"

#ifndef COMANDA_H_INCLUDED
#define COMANDA_H_INCLUDED

class Comanda {
    int nr_comanda;
    int nr_produse;
    std::vector<Produs> produse;

public:
 //   Comanda();

    Comanda(const int, const int, std::vector<Produs>);

    ~Comanda() = default;

    int getNrComanda();

    void afisComanda(); //afiseaza comanda

    int VerifDisp(); //verifica daca comanda se poate procesa
    double PretComanda();

};


#endif // COMANDA_H_INCLUDED
