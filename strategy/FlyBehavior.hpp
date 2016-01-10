// Fly behavior interface
class IFlyBehavior 
{
public:
	virtual void fly() = 0;
};

// Quack behavior interface
class IQuackBehavior
{
public:
	virtual void quack() = 0;
};

class FlyWithWings : public IFlyBehavior
{
public:
	void fly();
};

class FlyNoWay : public IFlyBehavior 
{
public:
	void fly();
};

class Quack : public IQuackBehavior
{
public:
	void quack();
};

class Squeak : public IQuackBehavior
{
public:
	void quack();
};

class MuteQuack : public IQuackBehavior
{
public:
	void quack();
};
