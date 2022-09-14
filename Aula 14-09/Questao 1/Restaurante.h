#include <iostream>
#include <string>
#include "Empresa.h"

using namespace std;

class Restaurante: public Empresa{
    public:
        //Construtor;
        Restaurante(string, string, string, string, string, string, string, string);

        //GETS;
        string GetPrecoMedio();
        string GetTipoComida();

        //SETS;
        void SetPrecoMedio(string precoMedio);
        void SetTipoComida(string tipoComida);

        //Print;
        void printRestaurante();
        
    private:
        string precoMedio;
        string tipoComida;
};