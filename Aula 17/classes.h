#ifndef CLASSES_H
#define CLASSES_H
#include <bits/stdc++.h>
using namespace std;

class Person{
    private:
    string name;
    string genero;
    int age;
    string job;
    float salario;
    
    public:
    //CONSTRUTOR;
    Person();
    
    //GETS
    string getname();
    string getgenero();
    int getage();
    string getjob();
    float getsalario();

    //SETS
    void setname(string n);
    void setgenero(string n);
    void setage(int x);
    void setjob(string n);
    void setsalario(float x);

    protected:
};

//TIPO->ClASSE->METODO;

//GETS
string Person::getname(){
    return name;
}
string Person::getgenero(){
    return genero;
}
int Person::getage(){
    return age;
}
string Person::getjob(){
    return job;
}
float Person::getsalario(){
    return salario;
}

//SETS
void Person::setname(string n){
    name = n;
}
void Person::setgenero(string n){
    genero = n;
}
void Person::setage(int x){
    age = x;
}
void Person::setjob(string n){
    job = n;
}
void Person::setsalario(float x){
    salario = x;
}

//CLASSE -> CONSTRUTOR
Person::Person(){

};
#endif