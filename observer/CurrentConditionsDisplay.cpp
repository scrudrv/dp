#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData& subject)
:m_subject(subject)
{
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
	m_temperature = temperature;
	m_humidity = humidity;
	m_pressure = pressure;
}

void CurrentConditionsDisplay::display()
{
	std::cout << "Temperature=" << m_temperature << ", Humidity=" << m_humidity << ", Pressure=" << m_pressure << std::endl;
}
