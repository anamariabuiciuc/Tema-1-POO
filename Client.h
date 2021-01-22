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

    void set_nume(const std::string &nume) {
        Client::nume = nume;
    }


    int ClientMinor();

    void afisarePlata();


    virtual ~Client() {
       // std::cout << "destruct Client\n";
    }
};


class clientBuilder {
    Client cl;
public:
    clientBuilder& nume(std::string nume) {

        cl.set_nume(nume);
        return *this;
    }

    Client build() { return cl; }



};



#endif //TEMA2_CLIENT_H
