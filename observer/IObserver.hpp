#ifndef IOBSERVER
#define IOBSERVER

class IObserver
{
public:
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

class IDisplay
{
public:
	virtual void display() = 0;
};

#endif //IOBSERVER