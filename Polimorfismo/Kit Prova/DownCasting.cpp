#include <iostream>

using namespace std;

class Animal{
    public:
    virtual void som(){
        cout << "Som do animal" << endl;
    }
};

class Cao:public Animal{
    public:
    void som(){
        //Animal::som();
        cout << "Som do cachorro" << endl;
    }
};

int main()
{
    //Pelo visto o que pode ser feito é criar algo da classe BASE recebendo um objeto do tipo derivado
    //Depois, por dynamic_cast é possivel passar a "parte" DERIVADA para um ponteiro do tipo DERIVADA.
    
    Animal *myAnimal = new Cao();
    
    cout << typeid(myAnimal).name();
    
    Cao *myDog = nullptr;
    cout << endl;
    myDog = dynamic_cast<Cao*>(myAnimal);
    
    cout << typeid(myDog).name();
    

}

/*
#include <iostream>
#include <typeinfo>

using namespace std;

class Animal{
    public:
    virtual void som(){
        cout << "Som do animal" << endl;
    }
};

class Cao:public Animal{
    public:
    void som(){
        //Animal::som();
        cout << "Som do cachorro" << endl;
    }
};


int main()
{
    Animal *ptr = nullptr; // ponteiro da base;
    Cao *myDog = new Cao(); //obj da derivada;
    
    ptr = dynamic_cast<Animal*>(myDog);
    
    //ptr->som();
    
    /////////////////////////////////////////////////////////////
    //ISSO ABAIXO NAO FUNCIONOU!
        
    // Cao *ptr2 = nullptr; //ponteiro da derivada;
    // Animal *myAnimal = new Animal(); //obj da base;
    
    // ptr2 = dynamic_cast<Cao*>(myAnimal);
    // if(ptr2 == 0){
    //     cout << "vix";
    // }
    // ptr2->som();
    
    /////////////////////////////////////////////////////////////
    
    
    Animal *myAnimal = new Cao(); //Ponteiro de base para derivada
    Animal *myAnimal2 = new Animal(); //Ponteiro de base para base
    Cao *ptrDog = nullptr;
    
    ptrDog = dynamic_cast<Cao*>(myAnimal);
    //O dynamic_cast fez o ponteiro que era do tipo ANIMAL virar do tipo Cao
    //ptrDog->som();
    
    ptrDog = dynamic_cast<Cao*>(myAnimal2);
    //ptrDog->som();
    
    //Pelo visto o que pode ser feito é criar algo da classe BASE recebendo um objeto do tipo derivado
    //Depois, por dynamic_cast é possivel passar a "parte" DERIVADA para um ponteiro do tipo DERIVADA.
    
    char* x = 0;
    cout << typeid(x).name();
    
    
    // myAnimal->som();
    // myAnimal2->som();
    

    return 0;
}
*/