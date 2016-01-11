#include <iostream>

#include "Duck.hpp"

int main(int argc, char** argv)
{
	MallardDuck md;
	RedHeadDuck rhd;
	DecoyDuck dd;
	RubberDuck rd;

    std::cout << "Mallard duck:" << std::endl;
    md.display();
    md.performQuack();
    md.performFly();
    std::cout << "ReadHead duck:" << std::endl;
    rhd.display();
    rhd.performQuack();
    rhd.performFly();
    std::cout << "Decoy duck:" << std::endl;
    dd.display();
    dd.performQuack();
    dd.performFly();
    std::cout << "Rubber duck:" << std::endl;
    rd.display();
    rd.performQuack();
    rd.performFly();
}