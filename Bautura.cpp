//
// Created by Ana on 06-Dec-20.
//

#include "Bautura.h"
Bautura::Bautura() {
    this->cantitate = 0;
}

Bautura::Bautura(const std::string nume, const double pret, const bool status, bool alcool, bool cofeina, double cantitate) {
    this->nume = nume;
    this->pret = pret;
    this->status = status;
    this->alcool = alcool;
    this->cofeina = cofeina;
    this->cantitate = cantitate;
}


bool Bautura::isMancare() {
    return false;
}

bool Bautura::isBautura() {
    return true;
}

double Bautura::timpAlergare() {
    double calorii;
    calorii = this->cantitate*2;
    return calorii * 0.15;
}
