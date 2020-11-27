#include "Comanda.h"
#include <iostream>

Comanda::Comanda(const int Nr_comanda, const int Nr_produse, std::vector<Produs> lista_produse) {
    this->nr_comanda = Nr_comanda;
    this->nr_produse = Nr_produse;
    this->produse = lista_produse;
}

void Comanda::afisComanda() {
    std::cout << "Comanda cu nr " << nr_comanda << " contine : " << '\n';
    for (int i = 0; i < nr_produse; i++) {
        std::cout << " * " << produse[i].afiseazaNume();
        if (produse[i].getStatus()) //daca produsul este pe stoc
            std::cout << " - " << produse[i].getPret() << " lei" << '\n'; //afisam pretul sau
        else
            std::cout << " nu este pe stoc. :(" << '\n';
    }
}

int Comanda::VerifDisp() {
    int i;
    bool alc = false;
    for (i = 0; i < nr_produse; i++) {
        if (produse[i].getAlcool())
            alc = true; //daca comanda contine cel putin un produs ce contine alcool, alc devine true
    }

    return alc;
}

double Comanda::PretComanda() //Calculeaza totalul comenzii.
{
    int i;
    double suma = 0;
    for (i = 0; i < nr_produse; i++) {
        if (produse[i].getStatus()) //daca produsul este pe stoc, adaugam pretul sau la suma totala
            suma = suma + produse[i].getPret();
    }

    return suma;
}


int Comanda::getNrComanda() {
    return nr_comanda;
}
