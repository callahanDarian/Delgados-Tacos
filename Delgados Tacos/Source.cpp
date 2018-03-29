#include <iostream>
#include <string>
#include <iomanip>

int chipsChoice;
int chipsSide;

void chips()
{
	std::cout << "Would you like an appetizer of chips and salsa? \n 1.) Yes                   2.) No \n > ";
	std::cin >> chipsChoice;
}

int main()
{

	int tacoAmount;
	int burritoAmount;
	int enchiladaAmount;
	int tamaleAmount;
	int tortaAmount;

	std::cout << std::endl;
	std::cout << "       DELGADOS TACOS" << std::endl;
	std::cout << "     ____________________" << std::endl;
	std::cout << "    |    |               |" << std::endl;
	std::cout << "    |____|    __ __   __ |" << std::endl;
	std::cout << "    |    |   |  |  | |  ||" << std::endl;
	std::cout << "    |////|   |//|//| |//||" << std::endl;
	std::cout << "   _|////|   |//|//| |//||" << std::endl;
	std::cout << "  | --- |=   |__|__| |__||" << std::endl;
	std::cout << "  | --- |----------------|" << std::endl;
	std::cout << "  | --- |----------------|" << std::endl;
	std::cout << "  O=====O================O=*" << std::endl;
	std::cout << std::endl;

	std::cout << "Welcome to Delgados Tacos \n Please respond to the questions with numbers. \n" << std::endl;

	std::cout << "How many tacos would you like? \n > "; // 1
	std::cin >> tacoAmount;

	std::cout << "How many burritos would you like? \n > "; // 2
	std::cin >> burritoAmount;
	
	std::cout << "How many enchiladas would you like? \n > "; // 3
	std::cin >> enchiladaAmount;

	std::cout << "How many tamales would you like? \n > "; // 4
	std::cin >> tamaleAmount;

	std::cout << "How many tortas would you like? \n > "; // 5
	std::cin >> tortaAmount;

	chips();

	std::cout << std::endl;
	system("pause");
	return 0;
}




