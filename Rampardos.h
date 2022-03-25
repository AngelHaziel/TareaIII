#pragma once
#include "Pokemon.h"
#include <iostream>

class Rampardos:public Pokemon
{
private:
    
public:
void asignartipo(){
this->tipo1="Roca";
std::cout<<"Tipo 1: "<< this->tipo1 <<std::endl; 
};  
void asignarpeso(){
this->peso=102.5;
std::cout<<"Peso: "<< this->peso <<std::endl;    
};
void asignarpokedex(){
this->numeropokedex=409;
std::cout<<"Numero de Pokedex: "<< this->numeropokedex <<std::endl; 
}; 
};