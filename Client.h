//
// Created by Ana on 06-Dec-20.
//
#include "Comanda.h"
#ifndef TEMA2_CLIENT_H
#define TEMA2_CLIENT_H


class Client {
    std::string nume;
    Comanda comand; //clientul are o comanda
    int varsta;

public:

    Client(const std::string, Comanda &, const int);

    int ClientMinor();

    void afisarePlata();

};


#endif //TEMA2_CLIENT_H
