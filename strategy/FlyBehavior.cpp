#include "FlyBehavior.hpp"

#include <iostream>

IQuackBehavior::~IQuackBehavior()
{
}

void FlyWithWings::fly()
{
	std::cout << "Flying with wings" << std::endl;
}

FlyWithWings::~FlyWithWings()
{
}

void FlyNoWay::fly()
{
	std::cout << "No flying capabilities." << std::endl;
}

FlyNoWay::~FlyNoWay()
{
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

Quack::~Quack()
{
}

Squeak::~Squeak()
{
}

MuteQuack::~MuteQuack()
{
    
}