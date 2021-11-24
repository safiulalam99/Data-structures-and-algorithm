#include <iostream>
#include "Runway.h"
#include "Plane.h"
#include "Random.h"
#include "Utility.h"
#include "p1.h"


// airport of task 3 has  one runway that is used for both arrival and one for departure.
// Departure runway can be used to accept arrivals if needed 
class p5 : public p1
{
private:
    Runway* arrival_runway;
    Runway* departure_runway;
    Runway* third_runway;

public:
    p5();
    p5(int endTime, int queueLimit, double arrivalRate, double departureRate);
    ~p5();

    void initialize() override;

    void run() override;
    void run_idle(int time, string runway);
    void shut_down() override;
};
