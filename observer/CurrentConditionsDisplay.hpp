#ifndef CURRENTCONDITIONSDISPLAY
#define CURRENTCONDITIONSDISPLAY

#include "IObserver.hpp"

class ISubject;
class WeatherData;	

class CurrentConditionsDisplay : public IObserver, public IDisplay
{
public:
	CurrentConditionsDisplay(WeatherData& subject);
	void update(float temperature, float humidity, float pressure);
	void display();

private:
	WeatherData& m_subject;

	float m_temperature;
	float m_humidity;
	float m_pressure;
};

#endif