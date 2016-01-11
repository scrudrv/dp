#ifndef CONCRETE_COMPONENTS
#define CONCRETE_COMPONENTS

class HouseBlend : public Beverage
{
public:
	double cost();
};

class DarkRoast : public Beverage
{
public:
	double cost();
};

class Espresso : public Beverage
{
public:
	double cost();
};

class Decaf : public Beverage
{
public:
	double cost();
};

#endif
