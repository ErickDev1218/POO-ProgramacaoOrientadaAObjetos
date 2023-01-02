#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void som(){
        
    }
};

class Cao:public Animal{
    public:
    void som(){
        cout << "Woof Woof" << endl;
    }
};

class Gato:public Animal{
    public:
    void som(){
        cout << "Meow" << endl;
    }
    
};

int main()
{
    //Animal *myAnimal = new Animal();
    
    //myAnimal->som();
    
    Animal *p[2] = {new Cao(),new Gato()}; 
    
    for(int i = 0; i < 2; i++){
        p[i]->som();
    }
    
    
    
}