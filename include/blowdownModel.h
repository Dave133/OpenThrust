#ifndef BLOWDOWNMODEL_H   // To make sure you don't declare the function more than once by including the header multiple times.
#define BLOWDOWNMODEL_H

class blowdownModel {
private:
	struct Faults {
		char tempFault;
		bool vaporFault = false;
	}fault;

public:
void tankProps(double timeStep, double tankVolume, double oxyMass, double &vaporizedMass_prev, double &liquidMass_prev, double &T_Kelvin, double &TankPressure);
double ventLosses(double Tankpressure, double ambPressure, double ventArea);
};

#endif