#include "FlyBehavior.hpp"

#include <iostream>

void FlyWithWings::fly()
{
	std::cout << "Flying with wings" << std::endl;
}

void FlyNoWay::fly()
{
	std::cout << "No flying capabilities." << std::endl;
}

void Quack::quack()
{
	std::cout << "QUACK!" << std::endl;
}

void MuteQuack::quack()
{
	std::cout << "... (mute)" << std::endl;
}

void Squeak::quack()
{
	std::cout << "SQUEAK!" << std::endl;
}