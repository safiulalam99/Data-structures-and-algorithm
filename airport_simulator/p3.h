#include <iostream>
#include "Runway.h"
#include "Plane.h"
#include "Random.h"
#include "Utility.h"
#include "p1.h"

// airport of task 2 has  one runway that is used for both arrival and one for departure.

class p3 : public p1
{
private:
    Runway* arrival_runway;         //runway 1
    Runway* departure_runway;       //runway 2

public:
    p3();
    p3(int endTime, int queueLimit, double arrivalRate, double departureRate);
    ~p3();

    void initialize() override;

    void run() override;
    // void run_idle(int time) override;
    void shut_down() override;
};
