#ifndef PACOTE_H
#define PACOTE_H
#include <iostream>
using namespace std;

class Pacote{
    public:
        Pacote() = default;
        Pacote(string nd,string ed,string cd,string esd,string cepd,string nr,string er,string cr,string esr,string cepr,float p, float pk);

        void setnomeDes(string nd);
        void setendeDes(string ed);
        void setcidaDes(string cd);
        void setestaDes(string esd);
        void setcepDes(string cepd);

        void setnomeRem(string nr);
        void setendeRem(string er);
        void setcidaRem(string cr);
        void setestaRem(string esr);
        void setcepRem(string cepr);

        void setpeso(float p);
        void setprecoKg(float pk);

        float calculaCusto(float peso,float precoKg);




    private:


    protected:
        string nomeDes;
        string endeDes;
        string cidaDes;
        string estaDes;
        string cepDes;

        string nomeRem;
        string endeRem;
        string cidaRem;
        string estaRem;
        string cepRem;

        float peso;
        float precoKg;
};
#endif