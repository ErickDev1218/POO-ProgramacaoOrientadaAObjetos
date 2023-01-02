#include "Data.h"
#include <iostream>
#include <string>
using namespace std;

Data::Data(int dia, int mes, int ano){
    if((mes > 12 || mes < 1) || (dia > 31 || dia < 1)){
        cout << "ERROR! Entrada invalido!" << endl;
        this->dia = 0;
        this->mes = 0;
        this->ano = 0;
    }else{
        setdia(dia);
        setmes(mes);
        setano(ano);
    }
}

Data::Data(int dia, string mes, int ano){
    int aux = 0;
    if(mes == "janeiro"){
        aux = 1;
    }else if(mes == "fevereiro"){
        aux = 2;
    }else if(mes == "março" || mes == "marco"){
        aux = 3;
    }else if(mes == "abril"){
        aux = 4;
    }else if(mes == "maio"){
        aux = 5;
    }else if(mes == "junho"){
        aux = 6;
    }else if(mes == "julho"){
        aux = 7;
    }else if(mes == "agosto"){
        aux = 8;
    }else if(mes == "setembro"){
        aux = 9;
    }else if(mes == "outubro"){
        aux = 10;
    }else if(mes == "novembro"){
        aux = 11;
    }else if(mes == "dezembro"){
        aux = 12;
    }
    setdia(dia);
    setmes(aux);
    setano(ano);
}


//Gets;
int Data::getmes(){
    return mes;
}
int Data::getdia(){
    return dia;
}
int Data::getano(){
    return ano;
}

//Sets;
void Data::setdia(int d){
    dia = d;
}
void Data::setmes(int m){
    mes = m;
}
void Data::setano(int a){
    ano = a;
}

//Print;
void Data::print(){
    cout << "A data de hoje eh: ";
    cout << getdia() << "/" << getmes() << "/" << getano() << endl;
}

//Calcular quantidade de dias do ano até aquele mês;
int Data::Calc(int dia, int mes){
    if((mes > 12 || mes < 1) || (dia > 31 || dia < 1)){
        cout << "ERROR! Entrada invalido!" << endl;
        
    }else{
        int m = 0;
        int contador = 0;
        for(int i = 0; i < mes; i++){
            contador += 30;
            m++;
        }
        m = m/2;
        contador += m;
        contador -= dia;
        cout << "A quantidade de dias que passaram neste ano ate hoje eh: " << contador << endl;

    }
    
}

int Data::Calc(int dia, string mes){
    int aux = 0;
    if(mes == "janeiro"){
        aux = 1;
    }else if(mes == "fevereiro"){
        aux = 2;
    }else if(mes == "março" || mes == "marco"){
        aux = 3;
    }else if(mes == "abril"){
        aux = 4;
    }else if(mes == "maio"){
        aux = 5;
    }else if(mes == "junho"){
        aux = 6;
    }else if(mes == "julho"){
        aux = 7;
    }else if(mes == "agosto"){
        aux = 8;
    }else if(mes == "setembro"){
        aux = 9;
    }else if(mes == "outubro"){
        aux = 10;
    }else if(mes == "novembro"){
        aux = 11;
    }else if(mes == "dezembro"){
        aux = 12;
    }

    int m = 0;
    int contador = 0;
    for(int i = 0; i < aux; i++){
        contador += 30;
        m++;
    }
    m = m/2;
    contador += m;
    contador -= dia;
    cout << "A quantidade de dias que passaram neste ano ate hoje eh: " << contador << endl;

    }
