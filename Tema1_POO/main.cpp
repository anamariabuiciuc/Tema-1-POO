#include <iostream>
#include <string>
#include <cstring>
//using namespace std;


class Produs {


    std::string nume;
    double pret;
    bool status; //true="disponibil" sau false="indisponibil"
    bool alcool;
    // friend class Comanda;
public:

    Produs(const std::string, const double, const bool, const bool);
    ~Produs()=default;
    void afiseazaStoc();
    void afiseazaPret();
    std::string afiseazaNume();
    double getPret();
    bool getStatus();
    bool getAlcool();
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

double Produs::getPret()
{
    return pret;
}

bool Produs::getStatus()
{
    return status;
}

std::string Produs::afiseazaNume() {
    return nume;
}

bool Produs::getAlcool() {
    return alcool;
}

class Comanda {
    int nr_comanda;
    Produs *p;
  //  std::string lista_produse;

public:



    Comanda(const int,Produs);
    ~Comanda() = default;
/*
    void verificareProdus()
    {   //Produs p;
        if(lista_produse!=nume.p) cout<<"nu avem acest produs."
    }
*/
    void afisComanda();
    bool VerifDisp();



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
    Comanda *comand;
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
    {
       if (varsta <18 && comand)
           std::cout<<'\n'<<"Nu va putem da acest produs deoarece contine alcool. :(";
    }


  //std::string alc = "Irish";
        //if(strstr(lista_produse.comand.c_str(),alc.c_str()))
          //  {

           //     if(varsta < 18)
           //    {
//
                //   std::cout<<"Nu va putem da acest produs deoarece contine alcool. :(";
              //     std::cout<<"Doriti sa comandati alceva? Alegeti DA sau NU."<<'\n';

          //  }
          //  }










    };





 //void afiseazaComanda( );


    //  ~Client();





/*void Client::afiseazaComanda( )

    {
        std::cout<<"Clientul "<<nume<<" a comandat comanda cu nr "<<nr_comanda<<" "<<comanda<<'\n';
     } */

int main()
{   //Produs p("",0,false );
    Produs Espresso ("Espresso", 5 , false,false);
    Produs Latte ("Latte",6.99, true,false);
    Produs Cappuccino ("Cappuccino", 5.99, false,false);
    Produs Irish("Irish Coffee", 8, true,true);
    Produs ApaPlata("Apa plata", 3, true,false);
    Produs ApaMinerala("Apa minerala", 3, false,false);
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
     //Client C1("Ana", c1 , 18);

    c1.afisComanda();

    //Client C2(" ", 2 , " ", 7);
    // Client C3(" ", 3 , " ", 10);
    // Client C4( 4, 17);

    //  C1.afiseazaClient();
    // C2.afiseazaClient();
    //C3.afiseazaClient();
    // C4.afiseazaClient();
    //std::cout<<'\n';
    //  C1.afiseazaComanda();
    // std::cout<<'\n';
    //  C2.afiseazaComanda();
    //  std::cout<<'\n';
    //  C3.afiseazaComanda();
    //cout<<'\n';
    // C4.afiseazaComanda();



    return 0;
}
