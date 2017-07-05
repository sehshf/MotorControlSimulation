/*
 * Armature.hpp
 *
 *  Created on: Jun 28, 2017
 *      Author: ses
 */

#ifndef SRC_ARMATURE_HPP_
#define SRC_ARMATURE_HPP_

class Armature
{
public:
	Armature(float Km, float L, float R, float Kb);

private:
	float mKm;	// Torque constant
	float mL;	// [H] inductance
	float mR;	// [Ohm] Resistance
	float mKb;	// Back EMF constant
};



#endif /* SRC_ARMATURE_HPP_ */
