/*
 * DelayedKickOut.h
 *
 *  Created on: Oct 10, 2018
 *      Author: dennis
 */

#ifndef DELAYEDKICKOUT_H_
#define DELAYEDKICKOUT_H_

#include "Solenoid.h"

class DelayedKickOut: public Solenoid {
public:
	DelayedKickOut();
	DelayedKickOut(unsigned int delayMaxMs);
	virtual void activate();
	virtual void checkDelayedActivation();
	void activateDelayed();
private:
	unsigned int activationStart = 0;
	unsigned int maxDelay = 2000;

};

#endif /* DELAYEDKICKOUT_H_ */
