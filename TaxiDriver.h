#pragma once
#pragma once
#include "Driver.h"

class TaxiDriver : public Driver {
private:
	TaxiDriver();
	TaxiDriver(const TaxiDriver& obj);
public:
	static TaxiDriver& get_instance() {
		static TaxiDriver instance;
		instance.driver_licence = Taxi;
		return instance;
	}
};