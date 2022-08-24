#include <bits/stdc++.h>
using namespace std;

class Mercado{

    private:
    int quantidade;
    int lucro;
    string tipo;
    string nome;
    string porte;

    public:
    Mercado(int q, int l, string t, string n, string p);

    //GETS
    int getquantidade();
    int getlucro();
    string gettipo();
    string getnome();
    string getporte();

    //SETS
    void setquantidade(int q);
    void setlucro(int l);
    void settipo(string t);
    void setnome(string n);
    void setporte(string p);


    protected:

};

//GETS
int Mercado::getquantidade(){
    return quantidade;
}

int Mercado::getlucro(){
    return lucro;
}

string Mercado::gettipo(){
    return tipo;
}

string Mercado::getnome(){
    return nome;
}
string Mercado::getporte(){
    return porte;
}

//SETS
void Mercado::setquantidade(int q){
    quantidade = q;
}

void Mercado::setlucro(int l){
    lucro = l;
}

void Mercado::settipo(string t){
    tipo = t;
}

void Mercado::setnome(string n){
    nome = n;
}

void Mercado::setporte(string p){
    porte = p;
}

Mercado::Mercado(int q, int l, string t, string n, string p){
    if(n == "pinheiro"){
        nome = n;
        quantidade = 1000;
        lucro = 10000;
        tipo = "SuperMercado";
        porte = "grande";
    }
    if(n == "geraldo"){
        nome = n;
        quantidade = 500;
        lucro = 5000;
        tipo = "SuperMercado";
        porte = "medio";
    }
}

int main(){
    Mercado *pin = new Mercado(0,0,"","pinheiro","");

    cout << "Seu estabelecimento eh " << pin->getnome() << endl;
    cout << "Voce tem " << pin->getquantidade() << " funcionarios!" << endl;
    cout << "Seu lucro eh de " << pin->getlucro() << " reais/mes" << endl;
    cout << "Por isso seu porte eh " << pin->getporte() << endl;
    cout << "Seu tipo de mercado eh " << pin->gettipo() << endl; 

    cout << endl << endl;

    Mercado *ger = new Mercado(0,0,"","geraldo","");

    cout << "Seu estabelecimento eh " << ger->getnome() << endl;
    cout << "Voce tem " << ger->getquantidade() << " funcionarios!" << endl;
    cout << "Seu lucro eh de " << ger->getlucro() << " reais/mes" << endl;
    cout << "Por isso seu porte eh " << ger->getporte() << endl;
    cout << "Seu tipo de mercado eh " << ger->gettipo() << endl;
}