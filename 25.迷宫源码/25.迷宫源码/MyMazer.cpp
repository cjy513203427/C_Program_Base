/*
 * 文件名称：MyMazer.cpp
 * 文件功能：实现MazePerson类的代理类
 */

/*
 * 类名称：MyMazer
 * 类功能：代理MazePerson类
 */
#include "MyMazer.H"
#include "MazePerson.h"
/*
 * 函数名称：MyMazer
 * 函数功能：代理类的构造函数
 */
MyMazer::MyMazer():mazePerson(new MazePerson)
{
	//empty
}

/*
 * 函数名称：MyMazer
 * 函数功能：代理类的构造函数
 * 函数列表：
 *		currentX: 当前所在的横坐标
 *      currentY: 当前所在的纵坐标
 */

MyMazer::MyMazer(int currentX, int currentY)
{
	mazePerson = new MazePerson(currentX, currentY);
}

/*
 * 函数名称：MyMazer
 * 函数功能：代理类的构造函数
 * 函数列表：
 *		currentX: 当前所在的横坐标
 *      currentY: 当前所在的纵坐标
 *		myforward: 当前的主观前方
 */

MyMazer::MyMazer(int currentX,int currentY,objectiveDirections myforward)
{
	mazePerson = new MazePerson(currentX, currentY, myforward); 
}

/*
 * 函数名称：~MyMazer
 * 函数功能：释放被代理的类所占的资源
 */

MyMazer::~MyMazer()
{
	delete mazePerson;
}

/*
 * 函数名称：setPersonChar
 * 函数功能：内联函数，代理类设置表示人的字符
 * 函数名称：setPersonPic
 * 函数功能：一般函数
 */

void MyMazer::setPersonPic(char personChar)
{
	mazePerson->setPersonPic(personChar);
}

MyMazer &MyMazer::setPersonChar(char personChar)
{
	mazePerson->setPersonChar(personChar);
	return *this;
}
/*
 * 函数名称：setPersonForward,setPersonForwardDirection
 * 函数功能：代理类设置主观的前方向
 * 参数列表：
 *		myForward: SOUTH 下 NORTH 上 WEST 左 EAST 右
 */
void MyMazer::setPersonForwardDirection(objectiveDirections myForward)
{
	mazePerson->setPersonForwardDirection(myForward);
}

MyMazer &MyMazer::setPersonForward(objectiveDirections myForward)
{
	mazePerson->setPersonForward(myForward);
	return *this;
}

/*
 * 函数名称：setPersonPosition
 * 函数功能：设置人的起始位置
 * 参数列表：
 *		coordinateX: 人起始位置的横坐标
 *		coordinateY: 人起始位置的纵坐标
 */
void MyMazer::setPersonPos(int coordinateX, int coordinateY)
{
	mazePerson->setPersonPos(coordinateX, coordinateY);
}

MyMazer &MyMazer::setPersonPosition(int coordinateX, int coordinateY)
{
	mazePerson->setPersonPosition(coordinateX, coordinateY);
	return *this;
}

/*
 * 函数名称：setPersonSpeed
 * 函数功能：代理类设置人运动的速度
 * 参数列表：
 *		speed:  FAST 快速  MIDD 中速  SLOW 慢速
 */

void MyMazer::setPersonSpeed(int speed)
{
	mazePerson->setPersonSpeed(speed);
}

/*
 * 函数名称：setPersonSpeed
 * 函数功能：代理类设置人运动的速度
 * 参数列表：
 *		speed: 值越大速度越慢
 */

void MyMazer::setPersonSpeed(long speed)
{
	mazePerson->setPersonSpeed(speed);
}

/*
 * 函数名称：start
 * 函数功能：代理类使迷宫中的人开始运动
 */

void MyMazer::start()
{
	mazePerson->start();
}

