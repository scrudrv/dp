#include "CondimentDecorator.hpp"

#include <iostream>


Whip::~Whip()
{
   std::cout << "~Whip" << std::endl;
}

Mocha::~Mocha()
{
    std::cout << "~Mocha" << std::endl;
}