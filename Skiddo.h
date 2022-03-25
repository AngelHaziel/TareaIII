#pragma once
#include "Pokemon.h"
#include <iostream>

class Skiddo:public Pokemon
{
private:
    
public:
void asignartipo(){
this->tipo1="Planta";
std::cout<<"Tipo 1: "<< this->tipo1 <<std::endl;
};  
void asignarpeso(){
this->peso=31;
std::cout<<"Peso: "<< this->peso <<std::endl;    
};
void asignarpokedex(){
this->numeropokedex=672;
std::cout<<"Numero de Pokedex: "<< this->numeropokedex <<std::endl; 
};
};