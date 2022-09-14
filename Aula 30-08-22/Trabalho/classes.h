#ifndef CLASSES_H
#include <bits/stdc++.h> //biblioteca
using namespace std;

//classe
class Membro{
    private:

    string nome, ocupacao, email, palavraChave;
    int idade;
    char sexo;

    public:
    //Construtor;
    Membro(string n, string o, string e, string pc, int i, char s);

    //GETS;
    string getnome();
    string getocupacao();
    string getemail();
    string getpalavraChave();
    int getidade();
    char getsexo();
    
    //SETS;
    void setnome(string n);
    void setocupacao(string o);
    void setemail(string e);
    void setpalavraChave(string pc);
    void setidade(int i);
    void setsexo(char s);

    //imprimir;
    void imprimir();

    protected:

};
//Construtor;
Membro::Membro(string n, string o, string e, string pc, int i, char s){
    this->nome = n;
    this->ocupacao = o;
    this->email = e;
    this->palavraChave = pc;
    this->idade = i;
    this->sexo = s;
}

//Gets;
string Membro::getnome(){
    return nome;
}
string Membro::getocupacao(){
    return ocupacao;
}
string Membro::getemail(){
    return email;
}
string Membro::getpalavraChave(){
    return palavraChave;
}
int Membro::getidade(){
    return idade;
}
char Membro::getsexo(){
    return sexo;
}

//SETS;

void Membro::setnome(string n){
    nome = n;
}
void Membro::setocupacao(string o){
    ocupacao = o;
}
void Membro::setemail(string e){
    email = e;
}
void Membro::setpalavraChave(string pc){
    palavraChave = pc;
}
void Membro::setidade(int i){
    idade = i;
}
void Membro::setsexo(char s){
    sexo = s;
}

//imprimir;
void Membro::imprimir(){
    cout << nome << " " << ocupacao<< " " << email << " " << palavraChave << " " << idade << " " << sexo;
}
#endif