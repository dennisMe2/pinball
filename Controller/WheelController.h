/*
 * LedWheelController.h
 *
 *  Created on: Oct 12, 2018
 *      Author: dennis
 */

#ifndef WHEELCONTROLLER_H_
#define WHEELCONTROLLER_H_

#define WHEEL_Y 1
#define WHEEL_G 2
#define WHEEL_B 3
#define WHEEL_R 4

#include "../Led/SmartLed.h"
#include "BoatController.h"
#include "../Game/Game.h"

class WheelController {
public:
	WheelController(BoatController* boatie);
	void addLed(SmartLed* led, int index);
	void addLed10(SmartLed* led);
	void setGame(Game* game);
	void animate();
	void pause();
	void unPause();
	void reset();
	uint8_t getPoints();
	void setDelay(unsigned int delay){animationDelay=delay;};
private:
	SmartLed* leds[10];
	SmartLed* led10x = 0;
	uint8_t colours[10] = {WHEEL_R, WHEEL_Y, WHEEL_G, WHEEL_B, WHEEL_R, WHEEL_Y, WHEEL_G, WHEEL_B, WHEEL_R, WHEEL_Y};
	uint8_t points [10] = {20, 30, 40, 50, 40, 30, 40, 50, 40, 30};
	uint8_t currentLed = 0;
	unsigned long nextTime = 0;
	unsigned int animationDelay = 1500;
	bool isPaused = false;
	BoatController* boat;
	Game* game =0;
};

#endif /* WHEELCONTROLLER_H_ */
