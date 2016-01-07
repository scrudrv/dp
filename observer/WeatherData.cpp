#include "WeatherData.hpp"
#include "IObserver.hpp"

#include <algorithm>

WeatherData::~WeatherData()
{
	for(std::list<IObserver*>::iterator it = m_pObservers.begin(); it != m_pObservers.end(); ++it)
	{
		//delete (*it);
	}
}

void WeatherData::registerObserver(IObserver* observer)
{
	m_pObservers.push_front(observer);
}

void WeatherData::removeObserver(IObserver* observer)
{
	std::list<IObserver*>::iterator it = std::find(m_pObservers.begin(), m_pObservers.end(), observer);
	if(it != m_pObservers.end())
	{
		m_pObservers.remove(*it);
	}
}

void WeatherData::notifyObservers()
{
	for(std::list<IObserver*>::iterator it = m_pObservers.begin(); it != m_pObservers.end(); ++it)
	{
		(*it)->update(m_temperature, m_humidity, m_pressure);
	}
}

// to emulate real device that send info about changed data
void WeatherData::setParameters(float temperature, float humidity, float pressure)
{
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;

	parametersChanged();
}

void WeatherData::parametersChanged()
{
	notifyObservers();
}
