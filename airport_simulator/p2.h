#include <iostream>
#include "Runway.h"
#include "Plane.h"
#include "Random.h"
#include "Utility.h"
#include "p1.h"

// airport of task 1 has only one runway that is used for both arrival and departure.
class p2 : public p1
{
private:
    Runway* runway;

public:
    p2();
    p2(int endTime, int queueLimit, double arrivalRate, double departureRate);
    ~p2();

    void initialize() override;
    void run() override;
    // void run_idle(int time) override;
    void shut_down() override;
};
