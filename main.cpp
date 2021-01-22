#include <iostream>
#include <fstream>
#include "Produs.h"
#include "Comanda.h"
#include "Bautura.h"
#include "Mancare.h"
#include "Client.h"

///Buiciuc Ana-Maria, Grupa 251 - POO
///Aceasta tema este formata din trei clase: Produs, Client si Comanda.
//Update:
//Clasele Mancare si Bautura sunt derivate din clasa Produs.
///Un client al unui CoffeeShop plaseaza o comanda care contine produse.

std::ifstream in("date.in");

int main() {
   /* Produs Espresso; in >> Espresso;
    Produs Latte; in >> Latte;
    Produs Cappuccino; in >> Cappuccino;
    Produs Irish; in >> Irish;
    Produs ApaPlata; in >> ApaPlata;*/

   Produs Espresso("Espresso", 5, 1, 0);
   Produs Cappuccino("Cappucino", 7, 0, 0);
   Produs Irish ("Irish", 9, 1, 1);
   Produs ApaPlata("Apa plata",2.99, 1,0);
   Produs Latte("Latte", 9.99,1, 0);

    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';

    Comanda c1(1, 3, {Cappuccino, Irish, ApaPlata});
    Client C1("Roxana", c1, 15);
    std::cout << c1;
    std::cout << '\n';
    C1.afisarePlata();
    std::cout << '\n';

    Comanda c2(2, 3, {Espresso, Espresso, Cappuccino});
    Client C2("Alex", c2, 16);
    std::cout<<c2;
    std::cout << '\n';
    C2.afisarePlata();
    std::cout << '\n';

    Comanda c3(3, 1, {Irish});
    Client C3("Diana", c3, 21);
    std::cout<<c3;
    std::cout << '\n';
    C3.afisarePlata();
    std::cout << '\n';

    Comanda c4(4, 6, {Cappuccino, Irish, ApaPlata, Espresso, Latte, Espresso});
    Client C4("Gabriel", c4, 18);
    std::cout<<c4;
    std::cout << '\n';
    C4.afisarePlata();
    std::cout << '\n';

    Comanda c5(5, 2, {ApaPlata, Latte});
    Client C5("Georgiana", c5, 36);
    std::cout<<c5;
    std::cout << '\n';
    C5.afisarePlata();
    std::cout << '\n';
   
    //clientBuilder cb;
    //Client cc = cb.nume("Corina").build();



    return 0;
}
