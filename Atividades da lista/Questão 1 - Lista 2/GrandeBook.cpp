#include "GradeBook.h"
#include <iostream>
#include <string>
using namespace std;

//Construtores;
GradeBook::GradeBook(string n,string p){
    setCourseName(n);
    setProfName(p);
}

//Gets;
string GradeBook::getCourseName(){
    return CourseName;
}

string GradeBook::getProfName(){
    return ProfName;
}

//Sets;

void GradeBook::setCourseName(string n){
    CourseName = n;
}

void GradeBook::setProfName(string p){
    ProfName = p;
}

void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    cout << "This is your prof: " << getProfName() << "!" << endl;
}





