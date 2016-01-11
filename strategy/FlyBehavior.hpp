// Fly behavior interface
class IFlyBehavior 
{
public:
    virtual ~IFlyBehavior(){}
    virtual void fly() = 0;
};

// Quack behavior interface
class IQuackBehavior
{
public:
    virtual ~IQuackBehavior() = 0;
	virtual void quack() = 0;
};

class FlyWithWings : public IFlyBehavior
{
public:
    virtual ~FlyWithWings();
    
    void fly();
};

class FlyNoWay : public IFlyBehavior 
{
public:
    virtual ~FlyNoWay();
    
	void fly();
};

class Quack : public IQuackBehavior
{
public:
    virtual ~Quack();
    
	void quack();
};

class Squeak : public IQuackBehavior
{
public:
    virtual ~Squeak();
    
	void quack();
};

class MuteQuack : public IQuackBehavior
{
public:
    virtual ~MuteQuack();
    
	void quack();
};
