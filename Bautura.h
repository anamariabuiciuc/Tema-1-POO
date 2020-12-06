//
// Created by Ana on 06-Dec-20.
//
#include<iostream>
#include "Produs.h"
#include "Base.h"

#ifndef TEMA2_BAUTURA_H
#define TEMA2_BAUTURA_H


class Bautura : public Produs, public Base {

    bool cofeina;
    double cantitate; //cantitea in ml

public:

    Bautura();

    Bautura(const std::string, const double, const bool, const bool, const bool, double);

    ~Bautura() = default;

    bool isBautura();

    bool isMancare();

    double timpAlergare();

};


#endif //TEMA2_BAUTURA_H
