//
// Created by Ana on 06-Dec-20.
//

#include "Mancare.h"
#include "Produs.h"

Mancare::Mancare() {
    this->nr_calorii = 0;
}

Mancare::Mancare(const std::string nume, const double pret, const bool status, const std::string tip, const std::string alergeni, int nr_calorii) {
    this->nume = nume;
    this->pret = pret;
    this->status = status;
    this->tip = tip;
    this->alergeni = alergeni;
    this->nr_calorii = nr_calorii;
}
/*
bool Mancare::isBautura() {
    return false;
}

bool Mancare::isMancare() {
    return true;
}

*/

double Mancare::timpAlergare() {
    return this->nr_calorii * 0.2; // 0.2s pe calorie
}

double Mancare::calculEnergie() { //calculeaza cata energie iti ofera mancarea respectiva in kJ
    
    double energie;
    energie = this->nr_calorii * 4.184;

    
    //  Z Cal => Transformam in kJ.  =>  Z Cal x 4.184kJ/Cal = Y kJ
    
    return energie;
}
