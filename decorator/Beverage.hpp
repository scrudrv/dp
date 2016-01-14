#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
#include <iostream>

class Beverage
{
protected:
	std::string m_description;

public:
	Beverage():m_description("Unknown beveradge"){}
    virtual ~Beverage(){std::cout << "~Beverage" << std::endl;}

	virtual std::string getDescription() {return m_description;}
	double virtual cost() = 0;
};

#endif