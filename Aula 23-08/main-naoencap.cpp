#include <bits/stdc++.h>
using namespace std;

class Mercado{

    private:
    

    public:
    Mercado(int q);
    void imprimir();

    int quantidade;
    int lucro;
    string tipo;
    string nome;
    string porte;



    protected:

};

Mercado::Mercado(int q){
    if(q == 1){
        nome = "Pinheiro";
        quantidade = 1000;
        lucro = 10000;
        tipo = "SuperMercado";
        porte = "grande";
    }
    if(q == 2){
        nome = "Geraldo";
        quantidade = 500;
        lucro = 5000;
        tipo = "SuperMercado";
        porte = "medio";
    }
}

void Mercado::imprimir(){
    cout << "O nome da sua empresa eh " << nome << endl;
    cout << "Voce tem " << quantidade << " funcionarios!" << endl;
    cout << "Seu lucro eh de " << lucro << " reais/mes" << endl;
    cout << "Por isso seu porte eh " << porte << endl;
    cout << "Seu tipo de mercado eh " << tipo << endl;
}

int main(){
    Mercado *pin = new Mercado(1);
    pin->imprimir();

    cout << endl << endl;

    Mercado *ger = new Mercado(2);
    ger->imprimir();

    
}