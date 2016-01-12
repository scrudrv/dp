#ifndef CONCRETE_COMPONENTS
#define CONCRETE_COMPONENTS

class HouseBlend : public Beverage
{
public:
	HouseBlend() {m_description = "Houses Blend";}

   double cost(){return 0.89;}
};

class DarkRoast : public Beverage
{
public:
	DarkRoast() {m_descriptioin = "Dark Roast";}

   double cost() { return .99;}
};

class Espresso : public Beverage
{
public:
	Espresso() {m_description = "Espresso";}

   double cost() { return 1.99; }
};

class Decaf : public Beverage
{
public:
	Decaf() { m_description = "Decaf";}

   double cost() { return 1.09; }
};

#endif
