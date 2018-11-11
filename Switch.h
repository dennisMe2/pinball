/*
 * Switch.h
 *
 *  Created on: Oct 5, 2018
 *      Author: dennis
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include "PortUser.h"

class Switch: public PortUser {
public:
	Switch();
	Switch(uint8_t polarity);
	bool on();
	bool triggered();
	virtual void resetTriggers();
	virtual void setStatus(uint8_t stat);

private:
	unsigned long nextChangeTime = 0;
	uint8_t debounceDelay = 33; // ms
	bool activeLow:1;
	bool trig:1;
	bool previousStatus:1;
};

#endif /* SWITCH_H_ */
