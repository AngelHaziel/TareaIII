#include <iostream>
#include "Pikachu.h"
#include "Charizard.h"
#include "Gliscor.h"
#include "Mewtwo.h"
#include "Rampardos.h"
#include "Skiddo.h"
#include "Pokemon.h"

using namespace std;


int main(){
    Charizad a;
    Pikachu b;
    Gliscor c;
    Mewtwo d;
    Rampardos e;
    Skiddo f;
    std::cout<<"Primer Pokemon: Charizard"<<std::endl; 
    a.asignartipo();
    a.asignarpeso();
    a.asignarpokedex();
    std::cout<<"Segundo Pokemon: Pikachu"<<std::endl;   
    b.asignartipo();
    b.asignarpeso();
    b.asignarpokedex();
    std::cout<<"Tercer Pokemon: Gliscor"<<std::endl; 
    c.asignartipo();
    c.asignarpeso();
    c.asignarpokedex();
    std::cout<<"Cuarto Pokemon: Mewtwo"<<std::endl; 
    d.asignartipo();
    d.asignarpeso();
    d.asignarpokedex();
    std::cout<<"Quinto Pokemon: Rampardos"<<std::endl; 
    e.asignartipo();
    e.asignarpeso();
    e.asignarpokedex();
    std::cout<<"Sexto Pokemon: Skiddo"<<std::endl; 
    f.asignartipo();
    f.asignarpeso();
    f.asignarpokedex();
}