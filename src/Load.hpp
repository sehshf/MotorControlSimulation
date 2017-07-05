/*
 * Load.hpp
 *
 *  Created on: Jun 28, 2017
 *      Author: ses
 */

#ifndef SRC_LOAD_HPP_
#define SRC_LOAD_HPP_

class Load
{
public:
	Load(float J, float Kf);

private:
	float mJ; 		// [kg.m^2/s^2] inertial load
	float mKf;		// [Nms] viscous friction

};



#endif /* SRC_LOAD_HPP_ */
