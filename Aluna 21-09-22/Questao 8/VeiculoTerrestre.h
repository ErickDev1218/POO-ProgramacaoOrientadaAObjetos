#include <iostream>
#include "Veiculo.h"
using namespace std;

class VeiculoTerrestre: virtual public Veiculo{
    public:
        //Construtor;
        VeiculoTerrestre(string valor, string velocidade);

        //Gets;
        string getvalor();
        string getvelocidade();

        //Sets;
        void setvalor(string valor);
        void setvelocidade(string velocidade);

        //Print;
        void print();
    
    private:
        string valor;
        string velocidade;
};