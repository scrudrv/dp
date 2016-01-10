#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"

#include <memory>

int main(int argc, char** argv)
{
	std::unique_ptr<WeatherData> wd (new WeatherData);
	std::unique_ptr<CurrentConditionsDisplay> ccd (new CurrentConditionsDisplay(*wd));
	
	wd->registerObserver(ccd.get());
	wd->setParameters(1,2,3);
	ccd->display();

	return 0;
}


	