#include "Duck.hpp"
#include "FlyBehavior.hpp"

#include <iostream>

Duck::Duck()
:m_flybehavior(0),m_quackbehavior(0)
{
    // construct here :)
}

Duck::~Duck()
{
    if (m_flybehavior) {
        delete m_flybehavior;
    }
    if (m_quackbehavior) {
        delete m_quackbehavior;
    }
}

void Duck::performFly()
{
	//std::cout << "flying" << std::endl;
    m_flybehavior->fly();
}
void Duck::performQuack()
{
	//std::cout << "quacking" << std::endl;
    m_quackbehavior->quack();
}

void Duck::setFly(IFlyBehavior* fb)
{
	m_flybehavior = fb;
}
void Duck::setQuack(IQuackBehavior* qb)
{
	m_quackbehavior = qb;
}

void Duck::display()
{
	// nothing to display by default
}

MallardDuck::MallardDuck()
{
    IFlyBehavior* fb = new FlyWithWings();
    IQuackBehavior* qb = new Quack();
    
    setFly(fb);
	setQuack(qb);
}

MallardDuck::~MallardDuck()
{
}

void MallardDuck::display()
{
	std::cout << "Mallard" << std::endl;
}

RedHeadDuck::RedHeadDuck()
{
	IFlyBehavior* fb = new FlyWithWings();
	IQuackBehavior* qb = new Quack();
    
    setFly(fb);
    setQuack(qb);
}

RedHeadDuck::~RedHeadDuck()
{
}

void RedHeadDuck::display()
{
	std::cout << "Red head" << std::endl;
}

RubberDuck::RubberDuck()
{
	IFlyBehavior* fb = new FlyNoWay();
	IQuackBehavior* qb = new Squeak();
    
    setFly(fb);
    setQuack(qb);
}

RubberDuck::~RubberDuck()
{
}

void RubberDuck::display()
{
	std::cout << "Rubber" << std::endl;
}

DecoyDuck::DecoyDuck()
{
	IFlyBehavior* fb = new FlyNoWay();
	IQuackBehavior* qb = new MuteQuack();
    
    setFly(fb);
    setQuack(qb);
}

DecoyDuck::~DecoyDuck()
{
}

void DecoyDuck::display()
{
	std::cout << "Decoy" << std::endl;
}
