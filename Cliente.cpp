#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
        << "  Nome: " << Nome << endl
	<< "  Endereco: " << endereco << endl
	<< "  CEP: " << Cep << endl;
}

