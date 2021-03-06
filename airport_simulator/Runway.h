#pragma once
#include "extended_queue.h"
#include "plane.h"
#include "Utility.h"



class Runway
{
public:
    Runway(int limit);
    Error_code can_land(const Plane& current);
    Error_code can_depart(const Plane& current);
    Runway_activity activity(int time, Plane& moving);
    Runway_activity activity_3(int time, Plane& moving);
    void shut_down(int time) const;
    void fixDivertedLandingCount();
    void fixDivertedTakeoffCount();
    void idle();
    Runway_activity movePlaneToOtherRunway(int time, Plane& moving);
    Runway_activity serveLandingFromOtherRunway(int time, Plane& moving);
    Runway_activity serveTakeoffFromOtherRunway(int time, Plane& moving);

private:
    Extended_queue landing;
    Extended_queue takeoff;
    int queue_limit;
    int num_land_requests;    //  number of planes asking to land
    int num_takeoff_requests; //  number of planes asking to take off
    int num_landings;         //  number of planes that have landed
    int num_takeoffs;         //  number of planes that have taken off
    int num_land_accepted;    //  number of planes queued to land
    int num_takeoff_accepted; //  number of planes queued to take off
    int num_land_refused;     //  number of landing planes refused
    int num_takeoff_refused;  //  number of departing planes refused
    int land_wait;            //  total time of planes waiting to land
    int takeoff_wait;         //  total time of planes waiting to take off
    int idle_time;            //  total time runway is idle
   
    int num_landing_diverted; //  number of landing planes diverted to other runway
    int num_takeoff_diverted; //  number of departing planes diverted to other runway
};
