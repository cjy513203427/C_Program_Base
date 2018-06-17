/*--------------------------------------------*/
/* 文件名：MazePerson.h                       */
/* 文件内容：定义MazePerson类                 */
/* 作者：袁春旭                               */
/* 日期：2015年6月2日                         */
/*--------------------------------------------*/

/*
 * 类名称：MazePerson   
 * 功  能：迷宫中的人的类
 */

#ifndef MazePerson_H_
#define MazePerson_H_

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "Public.H"
using namespace std;

/*enum objectiveDirections
{
	SOUTH,NORTH,WEST,EAST         //南(上)，北(下)，西(左)，东(右)
};*/
//const int FAST = 1;
//const int MIDD = 2;
//const int SLOW = 3;
const bool YES = true;
const bool NO = false;

class MazePerson
{
	//使用枚举类型定义客观方向
	
public:
	MazePerson();														     //声明人的类的构造方法，默认初始化人的位置
	MazePerson(int currentX, int currentY);									 //声明人的类的构造方法，设定人的初始化位置
	MazePerson(int currentX, int currentY, objectiveDirections myForward);   //声明人的类的构造方法，设定人的初始化位置和方向
	MazePerson &setPersonPosition(int coordinateX, int coordinateY);       //声明设定人的位置的方法
	MazePerson &setPersonChar(char personChar);                            //声明设定人的表示的方法
	MazePerson &setPersonForward(objectiveDirections myForward);           //声明设定人的方向的方法
	void setPersonPos(int coordX, int coordY);							     //声明设定人的表示的方法
	void setPersonPic(char personChar);									     //声明设定人的表示的方法
	void setPersonForwardDirection(objectiveDirections myForward);		     //声明设定人的方向的方法
	void setPersonSpeed(long speed);                                         //声明设置人当前速度的方法，直接使用数字
	void setPersonSpeed(int speed);                                          //声明设置人当前速度的方法，使用设定的值
	void start();                                                            //声明人开始运动的方法

private:
	int preX;                         //声明前一个横坐标
	int preY;                         //声明前一个纵坐标
	int positionX;                    //声明当前横坐标
	int positionY;                    //声明当前纵坐标
	int personSpeed;                  //声明当前人的移动速度
	char personPic;                   //声明表示人的字符
	bool outOrNot;					  //声明人是否走出迷宫
	objectiveDirections forward;      //声明逻辑的前方
	     
	void savePrePosition();           //保存前一个坐标位置
	void moveSouth();                 //声明向南走的方法
	void moveNorth();                 //声明向北走的方法
	void moveWest();                  //声明向西走的方法
	void moveEast();                  //声明向东走的方法
	void moveAhead();                 //声明沿当前方向向前走的方法
	void turnLeft();                  //声明向左转的方法
	void turnRight();				  //声明向右转的方法
	void goAhead();					  //声明向当前方向前进的方法
	bool moveForward();               //声明可以进行主观判断如何前进的方法
	void gotoxy(int x, int y);		  //声明设定输出位置的方法
	void drawPerson();                //声明绘制走迷宫者的行走动画的方法
	

};

#endif //MazePerson_H_