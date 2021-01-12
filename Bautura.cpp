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


/*bool Bautura::isMancare() {
    return false;
}

bool Bautura::isBautura() {
    return true;
} */

double Bautura::timpAlergare() {  //calculeaza timpul pe care trebuie sa il alergi pentru a arde caloriile consumate pentru fiecare bautura
    double calorii;
    calorii = this->cantitate*2;
    return calorii * 0.15;
}

double Bautura::calculEnergie() { //calculeaza cata energie iti ofera bautura respectiva in kJ
    
    double energie;
    energie = this->cantitate * 5 * 4.184;
    if(cofeina == true) 
        energie = energie * 1.25;
    
    // cantitatea in g x 5 kcal/g = Z kcal = Z Cal => Transformam in kJ.  =>  Z Cal x 4.184kJ/Cal = Y kJ
    
    return energie;
}
