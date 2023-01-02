#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <exception>
#include <iostream>
#include <string.h>
using namespace std;


class CustomExcep:public std::exception{
    protected:
    char mensagem[100];
    public:
    
    CustomExcep(const char *e){
        strcpy(mensagem,e);
    }

    virtual const char* what(){
        return mensagem;
    }
};




#endif