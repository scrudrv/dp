#include "Duck.hpp"
#include "FlyBehavior.hpp"

#include <iostream>

void Duck::performFly()
{
	std::cout << "flying" << std::endl;
}
void Duck::performQuack()
{
	std::cout << "quacking" << std::endl;
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

void MallardDuck::MallardDuck()
{
	m_flybehavior = new FlyWithWings();
	m_quackbehavior = new Quack();
}

void MallardDuck::~MallardDuck()
{
	delete m_flybehavior;
	delete m_quackbehavior;
}

void MallardDuck::display()
{
	std::cout << "Mallard" << std::endl;
}

RedHeadDuck::RedHeadDuck()
{
	m_flybehavior = new FlyWithWings();
	m_quackbehavior = new Quack();
}

RedHeadDuck::~RedHeadDuck()
{
	delete m_flybehavior;
	delete m_quackbehavior;
}

void RedHeadDuck::display()
{
	std::cout << "Red head" << std::endl;
}

RubberDuck::RubberDuck()
{
	m_flybehavior = new FlyNoWay();
	m_quackbehavior = new Squeak();
}

RubberDuck::~RubberDuck()
{
	delete m_flybehavior;
	delete m_quackbehavior;
}

void RubberDuck::display()
{
	std::cout << "Rubber" << std::endl;
}

DecoyDuck::DecoyDuck()
{
	m_flybehavior = new FlyNoWay();
	m_quackbehavior = new MuteQuack();
}

DecoyDuck::~DecoyDuck()
{
	delete m_flybehavior;
	delete m_quackbehavior;
}

void DecoyDuck::display()
{
	std::cout << "Decoy" << std::endl;
}
