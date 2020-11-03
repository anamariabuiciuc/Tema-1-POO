#include "Comanda.h"
#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED


class Client{

    std::string nume;
    Comanda comand; //clientul are o comanda
    int varsta;


public:



   Client(const std::string, Comanda, const int);

   int ClientMinor();


    void afisarePlata();
};


#endif // CLIENT_H_INCLUDED
