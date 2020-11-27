#include "Produs.h"

Produs::Produs(const std::string Nume, const double Pret, const bool Status, const bool Alcool) {
    this->nume = Nume;
    this->pret = Pret;
    this->status = Status;
    this->alcool = Alcool;

};
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


double Produs::getPret() {
    return pret;
}

bool Produs::getStatus() {
    return status;
}

std::string Produs::afiseazaNume() {
    return nume;
}


bool Produs::contineAlcool() {
    return alcool;
}
