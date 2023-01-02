#include <iostream>
#include "CustomExcep.h"
#include <string.h>

using namespace std;

// class ExcecaoCustomizada:public exception{
//     protected:
//         char msg[100];

//     public:
//         ExcecaoCustomizada(const char* e){
//             strcpy(msg,e); //funcao que copia de "e" para "msg";
//         }

//         virtual const char* what(){
//             return msg;
//         }
// };

int divisao(int n1, int n2){
    if (n2 == 0){
        throw CustomExcep("Denominador nulo! Tente com outro numero.");
    }
    return n1/n2;
}

int fat(int n){
    if(n < 0){
        throw CustomExcep("Numero negativo");
    }else{
        if(n == 0){
            return 1;
        }else{
            return n*(fat(n-1));
        }
    }

    
}

int main(){
    do{
        int n1,n2,n3;
        cin >> n1 >> n2;
        try{
            cout << divisao(n1,n2);
            cout << endl;
            cin >> n3;
            cout << fat(n3) << endl;
            break;

        }catch(CustomExcep e){
            cout << "ERROR: " << e.what() << endl;
        }
    }while(true);
}