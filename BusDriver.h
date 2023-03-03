#pragma once
#include "Driver.h"

class BusDriver : public Driver {
private:
	BusDriver();
	BusDriver(const BusDriver& obj);
public:
	static BusDriver& get_instance() {
		static BusDriver instance;
		instance.driver_licence = Bus;
		return instance;
	}
};