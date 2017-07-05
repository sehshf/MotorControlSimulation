/*
 * Simulation.hpp
 *
 *  Created on: Jun 27, 2017
 *      Author: ses
 */

#ifndef SRC_SIMULATION_HPP_
#define SRC_SIMULATION_HPP_

#include <boost/numeric/odeint.hpp>

class Simulation
{
public:
	double mTime;

	Simulation(float startTime, float stopTime, float steps);
	~Simulation();

	void run();

private:
	float mStartTime; 	// Simulation start time
	float mStopTime;	// Simulation stop time
	float mStep;		// Simulation time step

	System newSystem;

};



#endif /* SRC_SIMULATION_HPP_ */
