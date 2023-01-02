#ifndef DIVIDEBYEXCEPRION_H
#define DIVIDEBYEXCEPRION_H
#include <stdexcept>
#include <string.h>
using namespace std;

class DivideByExceprion{
    protected:
        char mensagem[100];
    
    public:
        DivideByExceprion(const char* e){
            strcpy(mensagem,e);
        }

        virtual const char* what(){
            return mensagem;
        }
};



#endif