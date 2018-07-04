#ifndef  DUSTMAN_H
#define DUSTMAN_H

#include "Worker.h"
class Dustman:public Worker
{
public:
	Dustman(string name,int age);
	//~Dustman();
	virtual void work();

private:

};

#endif DUSTMAN_H