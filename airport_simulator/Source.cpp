#include <iostream>
#include "Utility.h"
#include "Runway.h"
#include "Plane.h"
#include <Random>
#include <stdlib.h> 
#include "p1.h"
#include "p2.h"
#include "p3.h"
#include "p4.h"
#include "p5.h"

using namespace std;




void run_idle(int time)
/*
Post: The specified time is printed with a message that the runway is idle.
*/
{
    cout << time << ": Runway is idle." << endl;
}


int main()     //  Airport simulation program
/*
Pre:  The user must supply the number of time intervals the simulation is to
      run, the expected number of planes arriving, the expected number
      of planes departing per time interval, and the
      maximum allowed size for runway queues.
Post: The program performs a random simulation of the airport, showing
      the status of the runway at each time interval, and prints out a
      summary of airport operation at the conclusion.
Uses: Classes Runway, Plane, Random and functions run_idle, initialize.
*/

{
    bool g = true;
    do {
        int option;
        p1* p = nullptr;
        cout << "Welcome to airport simulator.\n "
            << "Please choose the version you would like to run\n"
            << "1: task 1: single shared runway\n"
            << "2: task 2: separate runways for arrival and departure\n"
            << "3: task 3: separate runways for arrival and departure, planes can be moved between\n"
            << "4: task 4: separate runways for arrival and departure, 3rd runway to accomodate\n"
            << "5: task 5: single runway with priority in queue based on fuel level\n"
            << "Input: "
            << flush;

        cin >> option;
        switch (option) {


        case 1:
            p = new p2();
            break;
        case 2:
            p = new p3();
            break;
        case 3:
            p = new p4();
            break;
        case 4:
            p = new p5();
            break;

        }


        // p = new p3();
        p->run();
        p->shut_down();
        delete p;
    } while (!g);
}






