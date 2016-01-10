#include "Duck.hpp"

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