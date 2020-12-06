//
// Created by Ana on 06-Dec-20.
//

#include "Comanda.h"
#include <iostream>

Comanda::Comanda() {
    this->nr_comanda = 0;
    this->nr_produse = 0;
}

Comanda::Comanda(const int Nr_comanda, const int Nr_produse, std::vector<Produs> lista_produse) {
    this->nr_comanda = Nr_comanda;
    this->nr_produse = Nr_produse;
    this->produse = lista_produse;
}

/*
void Comanda::afisComanda() {
    std::cout << "Comanda cu nr " << nr_comanda << " contine : " << '\n';
    for (int i = 0; i < nr_produse; i++) {
        std::cout << " * " << produse[i].getNume();
        if (produse[i].getStatus()) //daca produsul este pe stoc
            std::cout << " - " << produse[i].getPret() << " lei" << '\n'; //afisam pretul sau
        else
            std::cout << " nu este pe stoc. :(" << '\n';
    }
} */

std::istream& operator>>(std::istream& in, Comanda& obj) {
    in >> obj.nr_comanda >> obj.nr_produse;

    Produs aux;

    for (int i = 0; i < obj.nr_produse; ++i) {
        in >> aux;
        obj.produse.push_back(aux);
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, Comanda& obj) {
    out << "Comanda cu nr " << obj.nr_comanda << " contine : " << '\n';
    for (int i = 0; i < obj.nr_produse; i++) {
        out << " * "<< obj.produse[i].getNume();
        if (obj.produse[i].getStatus()) {
            out << " - " << obj.produse[i].getPret() << " lei" << '\n';} //daca produsul este pe stoc afisam pretul sau
             else {out << " nu este pe stoc. :(" << '\n';}
    }

    return out;
}


Comanda& Comanda::operator=(const Comanda& obj) {
    this->nr_comanda = obj.nr_comanda;
    this->nr_produse = obj.nr_produse;
    this->produse = obj.produse;

    return *this;
}

int Comanda::VerifDisp() {
    int i;
    bool alc = false;
    for (i = 0; i < nr_produse; i++) {
        if (produse[i].contineAlcool()) {
            alc = true; //daca comanda contine cel putin un produs ce contine alcool, alc devine true
            break;
        }
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
