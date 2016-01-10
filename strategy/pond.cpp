#include <iostream>

#include "Duck.hpp"

int main(int argc, char** argv)
{
	MallardDuck md;
	RedHeadDuck rhd;
	DecoyDuck dd;
	RubberDuck rd;

	std::cout << "Mallard duck:" << std::endl 
		<< md.display() << std::endl
		<< md.quack() << std::endl
		<< md.fly() << std::endl << std::endl;
	std::cout << "ReadHead duck:" << std::endl 
		<< rhd.display() << std::endl
		<< rhd.quack() << std::endl
		<< rhd.fly() << std::endl << std::endl;
	std::cout << "Decoy duck:" << std::endl 
		<< dd.display() << std::endl
		<< dd.quack() << std::endl
		<< dd.fly() << std::endl << std::endl;
	std::cout << "Rubber duck:" << std::endl 
		<< rd.display() << std::endl
		<< rd.quack() << std::endl
		<< rd.fly() << std::endl << std::endl;
}