#pragma once
#include "Pokemon.h"
#include <iostream>

class Gliscor:public Pokemon
{
private:
    
public:
void asignartipo(){
this->tipo1="Tierra";
this->tipo2="Volador";
std::cout<<"Tipo 1: "<< this->tipo1 <<std::endl;
std::cout<<"Tipo 2: "<< this->tipo2 <<std::endl;  
};
void asignarpeso(){
this->peso=42.5;
std::cout<<"Peso: "<< this->peso <<std::endl;    
};
void asignarpokedex(){
this->numeropokedex=472;
std::cout<<"Numero de Pokedex: "<< this->numeropokedex <<std::endl; 
};   
};