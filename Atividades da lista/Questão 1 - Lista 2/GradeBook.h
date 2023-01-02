#ifndef GRADEBOOK-H
#define GRADEBOOK-h
#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    public:
        //Construtores;
        GradeBook(string n, string p);

        //Gets;
        string getCourseName();
        string getProfName();

        //Sets;
        void setCourseName(string n);
        void setProfName(string p);
        void displayMessage();

    private:
        string CourseName;
        string ProfName;

};
#endif