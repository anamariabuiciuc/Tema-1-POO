#include "Client.h"
#include<iostream>

Client::Client(const std::string Nume, Comanda c, const int Varsta) {
        this->nume = Nume;
        this->comand = c;
        this->varsta = Varsta;

    };

int Client::ClientMinor()
      {
         if( comand.VerifDisp() == true && varsta < 18 ){
         std::cout<<'\n'<< nume << ", nu va putem procesa comanda (nr "<< comand.getNrComanda() << ") deoarece contine alcool. :("<<'\n'<<'\n';
         return 1;
         }
         else return 0;
      }


void Client::afisarePlata()
    {
        if(comand.PretComanda() > 0 ) //Daca pretul comenzii este mai mare decat 0, adica daca cel putin unul dintre produsele
                                       //comandate este disponibil, afisam pretul total corespunzator.
        {
            if (!ClientMinor()) {
                std::cout << nume << " , totalul comenzii tale (nr " << comand.getNrComanda() << ") este " << comand.PretComanda() << " lei." << '\n';
            }
           }
        else   //Altfel, daca nici un produs nu este pe disponibil/pe stoc, afisam urmatorul mesaj.
                {
                      std::cout<<nume<<" , comanda dvs (nr "  << comand.getNrComanda()<< ") nu poate fi procesata pentru ca niciun produs nu este disponibil."<<'\n';
                      std::cout<<" Ne cerem scuze pentru incovenienta creata. :("<<'\n';
                }

        std::cout<<'\n';
        std::cout<<'\n';
        std::cout<<'\n';
    }
