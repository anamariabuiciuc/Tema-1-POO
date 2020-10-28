#include <iostream>
#include <string>
#include <cstring>

//Aceasta tema este formata din trei clase: Produs, Client si Comanda.
//Un client al unui CoffeeShop plaseaza o comanda care contine un produs.

class Produs {


    std::string nume;
    double pret;
    bool status; //true="disponibil" sau false="indisponibil"
    bool alcool; //true = produsul contine alcool, false = nu contine alcool

public:

    Produs(const std::string, const double, const bool, const bool);
    ~Produs()=default;
    void afiseazaStoc(); //afiseaza daca produsul este disponibil sau nu
    void afiseazaPret();
    std::string afiseazaNume();
    //double getPret(); //returneaza pretul produsului
   // bool getStatus(); //returneaza statusul produsului
    bool getAlcool(); //returneaza valoarea variabilei alcool
};

Produs::Produs(const std::string Nume, const double Pret, const bool Status, const bool Alcool)
{
    this->nume = Nume;
    this->pret = Pret;
    this->status = Status;
    this->alcool = Alcool;

}

void  Produs::afiseazaStoc()
{
    if(status==true) std::cout<<"Produsul "<<nume<<" este pe stoc."<<'\n';
    else std::cout<<"Produsul "<<nume<<" nu este pe stoc. :("<<'\n';
}

void Produs::afiseazaPret()
{
    std::cout<<"Produsul "<<nume<<" costa "<<pret<<" lei."<<'\n';
}

/*double Produs::getPret()
{
    return pret;
} */

/*bool Produs::getStatus()
{
    return status;
} */

std::string Produs::afiseazaNume() {
    return nume;
}

bool Produs::getAlcool() {
    return alcool;
}

class Comanda {
    int nr_comanda;
    Produs *p; //comanda contine un produs

public:



    Comanda(const int,Produs);
    ~Comanda() = default;


    void afisComanda(); //afiseaza comanda

    bool VerifDisp(); //verifica daca comanda se poate procesa



};


Comanda::Comanda(const int Nr_comanda,Produs t)
{
    this->nr_comanda = Nr_comanda;
    p=&t;
}

void Comanda::afisComanda() {
    std::cout << "Comanda cu nr " << nr_comanda << " : "<<p->afiseazaNume();
}

bool Comanda::VerifDisp() {
    return p->getAlcool();
}

class Client{

    std::string nume;
    Comanda *comand; //clientul are o comanda
    int varsta;


   public:


   // Client( );

    Client(Comanda c) {
        std::cout << "Introduceti numele clientului: ";
        std::cin >> nume;
        comand = &c;
        std::cout << '\n' << "Introduceti varsta clientului: ";
        std::cin >> varsta;
    }
    ~Client()
    { //daca clientul este minor si comanda sa contine alcool, nu ii procesam comanda.
       if (varsta <18 && comand)
           std::cout<<'\n'<<nume<<", nu va putem da acest produs deoarece contine alcool. :(";
    }

    };


int main()
{
    Produs Espresso ("Espresso", 5 , false,false);
    Produs Latte ("Latte",6.99, true,false);
    Produs Cappuccino ("Cappuccino", 5.99, false,false);
    Produs Irish("Irish Coffee", 8, true,true);
    Produs ApaPlata("Apa plata", 3, true,false);
    Espresso.afiseazaStoc();
    Espresso.afiseazaPret();
    std::cout<<'\n';
    Latte.afiseazaStoc();
    Latte.afiseazaPret();
    std::cout<<'\n';
    Cappuccino.afiseazaStoc();
    Cappuccino.afiseazaPret();
    std::cout<<'\n';
    Irish.afiseazaStoc();
    Irish.afiseazaPret();




    Comanda c1(1,Irish);
    Client C1(c1);
   // c1.afisComanda();
    //std::cout<<'\n';

    Comanda c2(2,Espresso);
    Client C2(c2);
    //c2.afisComanda();
   // std::cout<<'\n';


    Comanda c3(3, Cappuccino);
    Client C3(c3);
   // c3.afisComanda();
   //std::cout<<'\n';

    Comanda c4(4, Irish);
    Client C4(c4);
    //c4.afisComanda();
    //std::cout<<'\n';

    Comanda c5(5, Latte);
    Client C5(c5);
   // c5.afisComanda();



    c1.afisComanda();
    std::cout<<'\n';
    c2.afisComanda();
    std::cout<<'\n';
    c3.afisComanda();
    std::cout<<'\n';
    c4.afisComanda();
    std::cout<<'\n';
    c5.afisComanda();



    return 0;
}
