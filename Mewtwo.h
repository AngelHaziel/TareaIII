#pragma once
#include "Pokemon.h"
#include <iostream>

class Mewtwo:public Pokemon
{
private:
    
public:
void asignartipo(){
this->tipo1="Psiquico";
std::cout<<"Tipo 1: "<< this->tipo1 <<std::endl;
};
void asignarpeso(){
this->peso=122;
std::cout<<"Peso: "<< this->peso <<std::endl;    
};
void asignarpokedex(){
this->numeropokedex=150;
std::cout<<"Numero de Pokedex: "<< this->numeropokedex <<std::endl; 
};  
};