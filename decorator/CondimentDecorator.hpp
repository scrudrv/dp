#ifndef BEVERAGE_H
#define BEVERAGE_H

class Beverage;

class ICondimentDecorator : public Beverage
{
public:
   virtual std::string getDescription() = 0;
};

class Mocha : public ICondimentDecorator
{
private:
   Beverage* m_beverage:
public:
   Mocha(Beverage* beverage):m_beverage(beverage){}
   
   std::string getDescription(){return m_beverage->getDescription() + ", Mocha";}
   double cost(){return .20 + m_beverage.cost();}
};

class Whip : public ICondimentDecorator
{
private:
   Beverage* m_beverage;

public:
   Whip(Beverage* beverage):m_beverage(beverage){}

   std::string getDescription(){return m_beverage->getDescription() + ", Whip";}
   double cost(){return .15 + m_beverage->cost();}   
};

class Soy : public ICondimentConstructor
{
private:
   Beverage* m_beverage;

public:
   Soy(Beverage* beverage):m_beverage(beverage){}

   std::string getDescription(){return m_beverage->getDescription() + ", Soy";}
   double cost(){return .1 + m_beverage->cost();}   
};

class SteamedMilk : public ICondimentDecorator
{
private:
   Beverage* m_beverage;

public:
   SteamedMilk(Beverage* beverage):m_beverage(beverage){}

   std::string getDescription() {return m_beverage->getDescription() + ", Steamed Milk";}
   double cost(){return .11 + m_beverage->cost();}
};


#endif


