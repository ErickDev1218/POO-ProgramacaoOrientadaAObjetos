#include <iostream>
#include "VeiculoAquatico.h"
#include "VeiculoTerrestre.h"
using namespace std;

class VeiculoAnfibio: public VeiculoAquatico,VeiculoTerrestre{
    public:
        //Construtor
        VeiculoAnfibio(string nome, string marca,/*Terrestre ->*/ string valor, string velocidade,/*Aquatico->*/ string tipo, string tamanho,/*VeiculoAnf->*/ string novonome, string novotipo);

        //Gets;
        string getnovonome();
        string getnovotipo();

        //Sets;
        void setnovonome(string novonome);
        void setnovotipo(string novotipo);

        //Print;
        void print();

    private:
        string novonome;
        string novotipo;
};