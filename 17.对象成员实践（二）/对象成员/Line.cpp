#include<iostream>
#include "Line.h"
using namespace std;

Line::Line(int x1, int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{
	cout << "Line(int x1, int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)" << endl;
}
Line::~Line()
{

}
void Line::setA(int x, int y)
{

}
void Line::setB(int x, int y)
{

}
void Line::printInfo()
{
}