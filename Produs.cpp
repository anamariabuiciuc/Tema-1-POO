//
// Created by Ana on 06-Dec-20.
//

#include "Produs.h"
Produs::Produs(const std::string Nume, const double Pret, const bool Status, const bool Alcool) {
    this->nume = Nume;
    this->pret = Pret;
    this->status = Status;
    this->alcool = Alcool;

};

Produs::Produs() {
    pret = 0;
    status = false;
    alcool = false;
}

/*
void  Produs::afiseazaStoc()
{
    if(status) std::cout << "Produsul " << nume << " este pe stoc." << '\n';
    else std::cout<<"Produsul "<<nume<<" nu este pe stoc. :("<<'\n';
} */

/*
void Produs::afiseazaPret()
{
    std::cout<<"Produsul "<<nume<<" costa "<<pret<<" lei."<<'\n';
} */


std::istream& operator>>(std::istream& in, Produs& obj) {
    in >> obj.nume;
    in >> obj.pret >> obj.status >> obj.alcool;
    return in;
}

double Produs::getPret() {
    return pret;
}

bool Produs::getStatus() {
    return status;
}

std::string Produs::getNume() {
    return nume;
}


bool Produs::contineAlcool() {
    return alcool;
}

