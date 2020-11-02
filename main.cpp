#include <iostream>
#include <vector>
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
    double getPret(); //returneaza pretul produsului
   // bool getStatus(); //returneaza statusul produsului
    int getAlcool(); //returneaza valoarea variabilei alcool

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
    if(status) std::cout << "Produsul " << nume << " este pe stoc." << '\n';
    else std::cout<<"Produsul "<<nume<<" nu este pe stoc. :("<<'\n';
}

void Produs::afiseazaPret()
{
    std::cout<<"Produsul "<<nume<<" costa "<<pret<<" lei."<<'\n';
}

double Produs::getPret()
{
    return pret;
}

/*bool Produs::getStatus()
{
    return status;
} */

std::string Produs::afiseazaNume() {
    return nume;
}

int Produs::getAlcool() {
    if(alcool = 1) return 1;
        else return 0;
}


class Comanda {
    int nr_comanda;
    int nr_produse;
    std::vector<Produs> produse;


public:



    Comanda(const int, const int, std::vector<Produs>);
    ~Comanda() = default;

    int getNrComanda();
    void afisComanda(); //afiseaza comanda

    //int VerifDisp( ); //verifica daca comanda se poate procesa

   double PretComanda();


};


Comanda::Comanda(const int Nr_comanda, const int Nr_produse, std::vector<Produs> lista_produse)
{
    this->nr_comanda = Nr_comanda;
    this->nr_produse = Nr_produse;
    this->produse = lista_produse;
}

void Comanda::afisComanda() {
    std::cout << "Comanda cu nr " << nr_comanda << " contine : "<<'\n';
    for(int i=0; i< nr_produse; i++)
    { std::cout<<produse[i].afiseazaNume() <<'\n'; }


}


 /*int Comanda::VerifDisp( ) {
    int i;
    for (i = 0; i < nr_produse; i++) {
        if (produse[i].getAlcool() == 1) {   return 1; }
    }
        //std::cout<<"Produsul" <<produse[i].afiseazaNume()<<" contine alcool"<'\n';
    }

    */

double Comanda::PretComanda() //Calculeaza totalul comenzii.
{
    int i;
    double suma=0;
    for(i=0;i<nr_produse;i++)
    {
        suma = suma + produse[i].getPret();
    }

     return suma;
}

int Comanda::getNrComanda()
{
    return nr_comanda;
}

class Client{

    std::string nume;
    Comanda *comand; //clientul are o comanda
    int varsta;


   public:


    Client( );

    Client(const std::string Nume, Comanda c, const int Varsta) {
        this->nume = Nume;
        comand = &c;
        this->varsta = Varsta;
       // std::cout << '\n' << "Introduceti varsta clientului: ";
       // std::cin >> varsta;
    }

  /*  void ClientMinor()
    {
       if( comand->VerifDisp()== 0 && varsta < 18 )
          std::cout<<'\n'<< nume << ", nu va putem procesa comanda deoarece contine alcool. :(";

    } */

  /*  ~Client() { //daca clientul este minor si comanda sa contine alcool, nu ii procesam comanda
       if (comand->VerifDisp() && varsta < 18) {


           std::cout << '\n' << nume << ", nu va putem procesa comanda deoarece contine alcool. :(";

   } */

    void afisarePlata()
    {
        std::cout<<nume<<" , totalul comenzii tale (nr "<< comand->getNrComanda() << ") este "<< comand->PretComanda() <<" lei."<<'\n';
        //Afisam totalul de plata al comenzii unui client.
        std::cout<<'\n';
        std::cout<<'\n';
        std::cout<<'\n';
    }
    };


int main()
{
    Produs Espresso ("Espresso", 5 , false,false);
    Produs Latte ("Latte",6.99, true,false);
    Produs Cappuccino ("Cappuccino", 5.99, false,false);
    Produs Irish("Irish Coffee", 8, true,true);
    Produs ApaPlata("Apa plata", 3, true,true);
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
    std::cout<<'\n';
    std::cout<<'\n';
    std::cout<<'\n';
    std::cout<<'\n';



    Comanda c1(1,1,{Irish});
    Client C1("Roxana", c1, 16);
    c1.afisComanda();
    std::cout<<'\n';
    C1.afisarePlata();


  Comanda c2(2,3,{Espresso, Cappuccino, Irish});
    Client C2("Diana", c2, 19);
    c2.afisComanda();
    std::cout<<'\n';
   C2.afisarePlata();



    Comanda c3(3, 3, {Cappuccino, ApaPlata, Latte});
    Client C3("Gabriel", c3, 17);
   c3.afisComanda();
   std::cout<<'\n';
   C3.afisarePlata();


     Comanda c4(4, 4, {ApaPlata, ApaPlata, Cappuccino, Espresso});
     Client C4("Andrei",c4, 18);
     c4.afisComanda();
     std::cout<<'\n';
     C4.afisarePlata();




    return 0;
}
