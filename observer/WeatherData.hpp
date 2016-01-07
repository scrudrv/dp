#ifndef WEATHERDATA
#define WEATHERDATA

#include "ISubject.hpp"

#include <list>

class IObserver;

class WeatherData : public ISubject
{
public:
	WeatherData(){}
	~WeatherData();

	void registerObserver(IObserver* observer);
	void removeObserver(IObserver* observer);
	void notifyObservers();

	// to emulate real device that send info about changed data
	void setParameters(float temperature, float humidity, float pressure);
	void parametersChanged();

private:
	std::list<IObserver*> m_pObservers;
	float m_temperature;
	float m_humidity;
	float m_pressure;
};

#endif