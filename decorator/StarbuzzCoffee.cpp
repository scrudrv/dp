#include "Beverage.hpp"
#include "ConcreteComponents.hpp"
#include "CondimentDecorator.hpp"

#include <iostream>

int main(int argc, char** argv)
{
   Beverage* beverage = new Espresso();
   std::cout << beverage->getDescription() << " + " << beverage->cost() << std::endl;
   delete beverage;

   beverage = new DarkRoast();
   beverage = new Mocha(beverage);
   beverage = new Mocha(beverage);
   beverage = new Whip(beverage);

    std::cout << beverage->getDescription() << " + " << beverage->cost() << std::endl;

    delete beverage;

    return 0;
}