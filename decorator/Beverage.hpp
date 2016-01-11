#ifndef BEVERAGE_H
#define BEVERAGE_H

class Beverage
{
protected:
	std::string m_description;

public:
	Beveredge():m_description("Unknown beveradge"){}
	virtual ~Beverage(){}

	std::string getDescription() {return m_description;}
	double virtual cost() = 0;
};

#endif