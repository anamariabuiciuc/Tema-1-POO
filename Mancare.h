//
// Created by Ana on 06-Dec-20.
//

#ifndef TEMA2_MANCARE_H
#define TEMA2_MANCARE_H
#include "Produs.h"
#include "Base.h"

class Mancare : public Produs, public Base {
std::string tip;
std::string alergeni;
int nr_calorii;

public:
Mancare();
Mancare(const std::string, const double, const bool, const std::string, const std::string, int);
//Mancare(const bool, const bool );
~Mancare() = default;
//bool isBautura();
//bool isMancare();
double timpAlergare();
double calculEnergie();


};


#endif //TEMA2_MANCARE_H
