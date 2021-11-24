#pragma once
#include <iostream>
#include "runway.h"
#include "plane.h"
#include "random.h"



/*
This is a base version of airport class, that is not meant to be used as is.
Inherit this an implementation airport from this, and specify runways there.
*/
class p1
{
public:
    p1();
    p1(int endTime, int queueLimit, double arrivalRate, double departureRate);
    virtual ~p1();

    virtual void initialize() = 0;
    virtual void run() = 0;
    virtual void run_idle(int time);
    virtual void shut_down() = 0;


protected:
    int end_time;
    int queue_limit;
    double arrival_rate;
    double departure_rate;

    Random random;


};
