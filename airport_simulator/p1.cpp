
#include <iostream>
#include <climits>
#include "p1.h"


#include <iostream>
#include "runway.h"
#include "plane.h"
#include "random.h"
using namespace std;

p1::p1() : end_time{ 1 }, queue_limit{ 1 }, arrival_rate{ 0.1 }, departure_rate{ 0.1 }
{
}

p1::p1(int endTime, int queueLimit, double arrivalRate, double departureRate)
    : end_time{ endTime }, queue_limit{ queueLimit }, arrival_rate{ arrivalRate }, departure_rate{ departureRate }

    /*
    Post:  The Runway data members are initialized to record no
           prior Runway use and to record the limit on queue sizes.
    */
{
}

p1::~p1()
{
}

void p1::run_idle(int time)
{
    cout << time << ": Runway is idle." << endl;
}









