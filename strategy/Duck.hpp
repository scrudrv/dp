
class IFlyBehavior;
class IQuackBehavior;

class Duck
{
private:
	IFlyBehavior* m_flybehavior;
	IQuackBehavior* m_quackbehavior;

public:
	void performFly();
	void performQuack();

	void setFly(IFlyBehavior* fb);
	void setQuack(IQuackBehavior* qb);

	virtual void display();
};

class MallardDuck : public Duck
{
public:
	MallardDuck();
	~MallardDuck();

	void display();
};

class RedHeadDuck : public Duck
{
public:
	RedHeadDuck();
	~RedHeadDuck();

	void display();
};

class RubberDuck : public Duck
{
public:
	RubberDuck();
	~RubberDuck();

	void display();
};

class DecoyDuck : public Duck
{
public:
	DecoyDuck();
	~DecoyDuck();

	void display();
};
