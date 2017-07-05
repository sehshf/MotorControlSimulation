/*
 * Simulation.cpp
 *
 *  Created on: Jun 27, 2017
 *      Author: ses
 */

#include "Simulation.hpp"

using namespace boost::numeric::odeint;

Simulation::Simulation(float startTime, float stopTime, float step)
{
	mTime 	   = startTime;
	mStartTime = startTime;
	mStopTime  = stopTime;
	mStep 	   = step;
}

void Simulation::run()
{
	Plant 		DCMotor;
	Controller 	pidCtl;
	System 		newSystem(DCMotor, pidCtl);

//	long nSteps = (mStopTime - mStartTime) / mStep;
	float x = newSystem.init();

	for (long t = mStartTime; t < mStopTime; t = t + mStep)
	{
		size_t steps = integrate(newSystem.step(), x, t, t + mStep, mStep / 4);
	}
}
