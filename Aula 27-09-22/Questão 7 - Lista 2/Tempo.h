#ifndef TEMPO_H
#define TEMPO_H
#include <iostream>
using namespace std;

class Tempo{
    private:
        int hora;
        int minuto;
        int segundo;

    public:
        Tempo() = default;  
        Tempo(int h, int m, int s);

        int gethora();
        int getminuto();
        int getsegundo();

        void sethora(int h);
        void setminuto(int m);
        void setsegundo(int s);

        Tempo operator-(Tempo &v);
        Tempo operator+(Tempo &v);

        void print();

};
#endif
