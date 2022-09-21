#include <iostream>
using namespace std;

class Veiculo{
    public:
        //Construtor;
        Veiculo();
        Veiculo(string n, string m);

        //Gets;
        string getnome();
        string getmarca();

        //Sets;
        void setnome(string n);
        void setmarca(string m);

        //Print;
        void print();
    
    private:
        string nome;
        string marca;
};