#include <iostream>
#include "Produs.h"
#include "Comanda.h"
#include "Client.h"

///Buiciuc Ana-Maria, Grupa 251 - POO
///Aceasta tema este formata din trei clase: Produs, Client si Comanda.
///Un client al unui CoffeeShop plaseaza o comanda care contine un produs.

int main()
{
    Produs Espresso ("Espresso", 5 , false,false);
    Produs Latte ("Latte",6.99, true,false);
    Produs Cappuccino ("Cappuccino", 5.99, false,false);
    Produs Irish("Irish Coffee", 8, true,true);
    Produs ApaPlata("Apa plata", 3, true,true);

    std::cout<<'\n';
    std::cout<<'\n';
    std::cout<<'\n';
    std::cout<<'\n';


    Comanda c1(1, 3, {Cappuccino, Irish, ApaPlata });
    Client C1("Roxana", c1, 15);
    c1.afisComanda();
    std::cout<<'\n';
    C1.afisarePlata();
    std::cout<<'\n';

    Comanda c2(2, 3, {Espresso, Espresso, Cappuccino});
    Client C2("Alex", c2, 16);
    c2.afisComanda();
    std::cout<<'\n';
    C2.afisarePlata();
     std::cout<<'\n';

    Comanda c3(3, 1, {Irish});
    Client C3("Diana", c3, 21);
    c3.afisComanda();
    std::cout<<'\n';
    C3.afisarePlata();
    std::cout<<'\n';

    Comanda c4(4, 6, {Cappuccino, Irish, ApaPlata, Espresso, Latte, Espresso});
    Client C4("Gabriel", c4, 18);
    c4.afisComanda();
    std::cout<<'\n';
    C4.afisarePlata();
    std::cout<<'\n';

    Comanda c5(5, 2, {ApaPlata, Latte});
    Client C5("Georgiana", c5, 36);
    c5.afisComanda();
    std::cout<<'\n';
    C5.afisarePlata();
    std::cout<<'\n';



    return 0;
}
