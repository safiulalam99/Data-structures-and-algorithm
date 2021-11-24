
#pragma once
#include <iostream>
#include "Utility.h"
#include "Utility.h"
class Plane {
public:
	Plane();
	Plane(int flt, int time, Plane_status status);
	void refuse() const;
	void land(int time) const;
	void fly(int time) const;
	int started() const;
	void run_idle(int time);
private:
	int flt_num;
	int clock_start;
	Plane_status state;
};

