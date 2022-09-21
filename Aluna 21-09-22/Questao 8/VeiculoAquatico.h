#include <iostream>
#include "Veiculo.h"
using namespace std;

class VeiculoAquatico: virtual public Veiculo{
    public:
        //Construtor;
        VeiculoAquatico(string tipo, string tamanho);

        //Gets;
        string gettipo();
        string gettamanho();

        //Sets;
        void settipo(string tipo);
        void settamanho(string tamanho);
    
    private:
        string tipo;
        string tamanho;
};