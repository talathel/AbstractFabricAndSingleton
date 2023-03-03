#pragma once
#include "BoardAnyCar.h"
#include "TaxiDriver.h"
#include "Passenger.h"

class BoardTaxi : public BoardAnyCar{
public:
	void BoardPassenger();
	void BoardDriver();
};