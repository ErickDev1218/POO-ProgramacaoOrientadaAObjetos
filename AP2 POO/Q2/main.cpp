#include <iostream>
#include "DivideByExceprion.h"
using namespace std;

int divide(int x,int y){
    if(y == 0){
        throw DivideByExceprion("ERROR! Tentou dividir por zero!");
    }else{
        return x/y;
    }
}

int main(){
    int x = 0;
    int y = 0;
    cin >> x >> y;
    try{
        cout << "X/Y = " << divide(x,y) << endl;
    }catch(DivideByExceprion e){
        cout << e.what() << endl;
    }
}