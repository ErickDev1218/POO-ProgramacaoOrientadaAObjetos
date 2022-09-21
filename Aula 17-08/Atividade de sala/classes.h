#ifndef CLASSES_H
#define CLASSES_H
#include <bits/stdc++.h>
using namespace std;

class Usuario{
    
    private:
    string nome,modalidade,ocupacao,email;
    int idade;
    char sexo;
    
    public:
    Usuario();

    //GETS
    string getnome();
    string getmodalidade();
    string getocupacao();
    string getemail();
    int getidade();
    char getsexo();

    //SETS
    void setnome(string n);
    void setmodalidade(string n);
    void setocupacao(string n);
    void setemail(string n);
    void setidade(int x);
    void setsexo(char n);
};

Usuario::Usuario(){

}

//GETS
string Usuario::getnome(){
    return nome;
}
string Usuario::getmodalidade(){
    return modalidade;
}
string Usuario::getocupacao(){
    return ocupacao;
}
string Usuario::getemail(){
    return email;
}
int Usuario::getidade(){
    return idade;
}
char Usuario::getsexo(){
    return sexo;
}

//SETS
void Usuario::setnome(string n){
    nome = n;
}
void Usuario::setmodalidade(string n){
    modalidade = n;
}
void Usuario::setocupacao(string n){
    ocupacao = n;
}
void Usuario::setemail(string n){
    email = n;
}
void Usuario::setidade(int x){
    idade = x;
}
void Usuario::setsexo(char n){
    sexo = n;
}

#endif