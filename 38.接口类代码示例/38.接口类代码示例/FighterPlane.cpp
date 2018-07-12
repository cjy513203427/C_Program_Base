#include"FighterPlane.h"
#include<iostream>
FighterPlane::FighterPlane(string code):Plane(code)
{

}

void FighterPlane::takeoff() 
{
	cout<<"FighterPlane::takeoff()"<<endl;
}

void FighterPlane::land() 
{
	cout<<"FighterPlane::land() "<<endl;
}