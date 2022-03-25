#pragma once
#include "Pokemon.h"
#include <iostream>

class Pikachu:public Pokemon
{
private:
    
public:
void asignartipo(){
this->tipo1="Electrico";
this->tipo2="";
std::cout<<"Tipo 1: "<< this->tipo1 <<std::endl;
std::cout<<"Tipo 2: "<< this->tipo2 <<std::endl;  
};
void asignarpeso(){
this->peso=6;
std::cout<<"Peso: "<< this->peso <<std::endl;    
};
void asignarpokedex(){
this->numeropokedex=25;
std::cout<<"Numero de Pokedex: "<< this->numeropokedex <<std::endl; 
};   
};


