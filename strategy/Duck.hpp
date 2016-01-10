class Duck
{
private:
	IFlyBehavior* flybehavior;
	IQuackBehavior* quackbehavior;

public:
	void performFly();
	void performQuack();

	void setFly(IFlyBehavior* fb);
	void setQuack(IQuackBehavior* qb);

	virtual void display();
};