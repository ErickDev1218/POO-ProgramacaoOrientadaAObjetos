#include <iostream>
#include <string.h>
using namespace std;
class CustomExcep{
    protected:
        char mensagem[100];
    
    public:
        CustomExcep(const char* e){
            strcpy(mensagem,e);
        }
        
        
        virtual const char* what(){
            return mensagem;
        }
};

int divide(int n1, int n2){
    if(n2 == 0){
        throw CustomExcep("Tentou dividir por zero!");
    }
    return n1/n2;
}

int fatorial(int n){
    if(n < 0){
        throw CustomExcep("Tentou fatoriar um numero negativo");
    }else{
        if(n == 0){
            return 1;
        }else{
        return n*fatorial(n-1);
        }
    }
}
int main()
{
    int n1,n2,n3;
    do{
        try{
            //bloco onde terá o possivel erro.
            cin >> n1 >> n2;
            cout << divide(n1,n2);
            cout << endl;
            cin >> n3;
            cout << fatorial(n3);
            break;
            
        }catch(CustomExcep e){
            cout << "ERROR: " << e.what() << endl;
            
        }
    }while(true);
    
    
}
//Usando uma classe de exceção

/*
Exceção de outra forma
#include <iostream>
#include <exception>


using namespace std;
int divide(int n1, int n2){
    if(n2 == 0){
        throw "Tentou dividir por zero!";
    }
    return n1/n2;
}

int main()
{
    int n1,n2;
    try{
        //bloco onde terá o possivel erro.
        cin >> n1 >> n2;
        divide(n1,n2);
        
    }catch(const char* e){
        cout << "ERROR: " << e << endl;
        
    }
    
    
}

Exceção usando o padrao da biblioteca EXCEPTION
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
int main(){
    vector<int>vetor(5); //0 1 2 3 4
    
    try{
        //bloco onde terá o possivel erro.
        vetor.at(5) = 10; //Tentando colocar um numero em um local que nao existe no vetor.
        
    }catch(exception& e){
        cout << "ERROR: " << e.what() << endl;
        
    }
    
    
}
No ultimo caso, a exceção para completamente o código.
*/