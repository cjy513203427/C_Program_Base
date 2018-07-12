#pragma once
#include"Flyable.h"
#ifndef BIRD_H
#define BIRD_H
class Bird :public Flyable
{
public:
	void foraging();
	virtual void takeoff();
	virtual void land();
};
#endif