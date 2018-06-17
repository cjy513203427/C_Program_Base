/*--------------------------------------------*/
/* 文件名：MazePerson.cpp                        */
/* 文件内容：定义MazePerson类                 */
/* 作者：袁春旭                                             */
/* 日期：2015年6月2日                                 */
/*--------------------------------------------*/

/*
 * 类名称：MazePerson   
 * 功  能：迷宫中的人的类
 * 函数列表：
 *		MazePerson()
 *			功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 *		MazePerson(int currentX, int currentY)
 *			功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 *		MazePerson(int currentX, int currentY, objectiveDirection myDirection)
 *			功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 *		void savePrePosition()
 *			功能：保存前一个坐标位置
 *		void moveSouth()
 *			功能：声明向南走的方法
 *		void moveNorth()
 *			功能：声明向北走的方法
 *		void moveWest()
 *			功能：声明向西走的方法
 *		void moveEast()
 *			功能：声明向东走的方法
 *		bool moveForward()
 *			功能：声明主观向前的方法
 *		void turnRole()
 *			功能：声明改变方向的方法
 */
//#include <iostream>

//using namespace std;

#include "MazePerson.h"
#include "MazeMap.h"
//#include "MazeMap.cpp"
/*
 * 函数名称：MazePerson
 * 函数功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 */

MazePerson::MazePerson():personPic('*')
{
	positionX = 1;
	positionY = 5;
	preX = 10000;
	preY = 10000;
	personSpeed = 10000;
	forward = NORTH;	
	outOrNot = false;
}

/*
 * 函数名称：MazePerson
 * 函数功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 * 参数列表：
 *		currentX：横坐标
 *		currentY：纵坐标
 */

MazePerson::MazePerson(int currentX, int currentY):personPic('*')
{
	positionX = currentX;
	positionY = currentY;
	preX = 10000;
	preY = 10000;
	forward = NORTH;
	outOrNot = false;
}

/*
 * 函数名称：MazePerson
 * 函数功能：构造函数，初始化人的横坐标、纵坐标和前进方向
 * 参数列表：
 *		currentX：横坐标
 *      currentY：纵坐标
 *		myForward：前方向
 */

MazePerson::MazePerson(int currentX, int currentY, objectiveDirections myForward):personPic('*')
{
	positionX = currentX;
	positionY = currentY;
	preX = 10000;
	preY = 10000;
	forward = myForward;
	outOrNot = false;
}

/*
 * 函数名称：savePrePosition
 * 函数功能：保存前一个位置坐标
 * 返回内容：无
 */
void MazePerson::savePrePosition()
{
	preX = positionX;
	preY = positionY;
}

/*
 * 函数名称：moveSouth
 * 函数功能：向客观的南的方向走
 * 函数列表：无
 */
void MazePerson::moveSouth()
{
	//保存前一个坐标位置
	savePrePosition();
	//向南移动一个位置
	positionX = positionX;
	positionY = positionY + 1;
}

/*
 * 函数名称：moveNouth
 * 函数功能：向客观的北的方向走
 * 函数列表：无
 */
void MazePerson::moveNorth()
{
	//保存前一个坐标位置
	savePrePosition();
	//向北移动一个位置
	positionX = positionX;
	positionY = positionY - 1;
}

/*
 * 函数名称：moveWest
 * 函数功能：向客观的西的方向走
 * 函数列表：无
 */
void MazePerson::moveWest()
{
	//保存前一个坐标位置
	savePrePosition();
	//向西移动一个位置
	positionX = positionX - 1;
	positionY = positionY;
}

/*
 * 函数名称：moveEast
 * 函数功能：向客观的东的方向走
 * 函数列表：无
 */
void MazePerson::moveEast()
{
	//保存前一个坐标位置
	savePrePosition();
	//向东移动一个位置
	positionX = positionX + 1;
	positionY = positionY;
}

/*
 * 函数名称：gotoxy
 * 函数功能：确定控制台中字符的输出位置
 * 函数列表：
 *		x：横坐标
 *		y：纵坐标
 */
void MazePerson::gotoxy(int x, int y)   
{   
	COORD cd;    
	cd.X   =   x; 
	cd.Y   =   y;     
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cd);     
};

/*
 * 函数名称：drawPerson
 * 函数功能：绘制走迷宫者的行走动画
 * 返回内容：无
 */

void MazePerson::drawPerson()
{
	//在当前位置上绘制人
	char mazeRoad = MazeMap::getRoadChar();
	gotoxy(preX,preY);
	cout << mazeRoad;
	gotoxy(positionX,positionY);
	cout << personPic;
	//为制作动画效果使用时间延迟
	Sleep(personSpeed);
}

/*
 * 函数名称：setPersonPosition
 * 函数功能：串联函数，设置人当前的位置
 * 函数列表：
 *		coordinateX：人在迷宫中横坐标的位置
 *		coordinateY：人在迷宫中纵坐标的位置
 */

MazePerson &MazePerson::setPersonPosition(int coordinateX,int coordinateY)
{
	positionX = coordinateX;
	positionY = coordinateY;
	return *this;
}

void MazePerson::setPersonPos(int coordX, int coordY)
{
	positionX = coordX;
	positionY = coordY;
}


/*
 * 函数名称：setPersonChar
 * 函数功能：串联函数，设置人的表示
 * 函数列表：
 *		personChar：表示人的字符
 */

MazePerson &MazePerson::setPersonChar(char personChar)
{
	personPic = personChar;
	return *this;
}

void MazePerson::setPersonPic(char personChar)
{
	personPic = personChar;
}
/*
 * 函数名称：setPersonForward
 * 函数功能：串联函数，设置人的前进方向
 * 参数列表：
 *		myForward：表示人的前进方向
 */

MazePerson &MazePerson::setPersonForward(objectiveDirections myForward)
{
	forward = myForward;
	return *this;
}

void MazePerson::setPersonForwardDirection(objectiveDirections myForward)
{
	forward = myForward;
}

/*
 * 函数名称：turnLeft
 * 函数功能：向左转
 * 返回内容：无
 */
void MazePerson::turnLeft()
{
	//forward = (forward + 1) % 4;
	//cout << "turn left" << endl;
	switch(forward)
	{
	case NORTH: forward = WEST;  break;
	case WEST:	forward = SOUTH; break;
	case SOUTH:	forward = EAST;  break;
	case EAST:	forward = NORTH; break;
	default: cout << "方向错误。" << endl;
	}
} 

/*
 * 函数名称：turnRight
 * 函数功能：向右转
 * 返回内容：无
 */
void MazePerson::turnRight()
{
	//cout << "turn right" << endl;
	switch(forward)
	{
	case NORTH: forward = EAST;  break;
	case WEST:  forward = NORTH; break;
	case SOUTH: forward = WEST;  break;
	case EAST:  forward = SOUTH; break;
	default: cout << "方向错误。" << endl;
	}
}

/*
 * 函数名称：goAhead
 * 函数功能：朝当前的前方走一步
 * 返回内容：无
 */
void MazePerson::goAhead()
{
	switch(forward)
	{
	case NORTH: moveNorth(); break;
	case WEST:  moveWest();  break;
	case SOUTH: moveSouth(); break;
	case EAST:  moveEast();  break;
	default: cout << "方向不明，无法前进。" << endl;
	}
	//形成动画
	drawPerson();
	//检测是否到达出口
	//如果到达出口，则提示
	if(MazeMap::checkMazeDoor(positionX, positionY))
	{
		gotoxy(0,22);
		cout << "哈哈，终于出来啦！" << endl;
		outOrNot = true;
	}
}

/*
 * 函数名称：setPersonSpeed
 * 函数功能：通过等级设定速度
 */
void MazePerson::setPersonSpeed(int speed)
{
	//设置一个时间延迟的值
	personSpeed = speed * 500;
	
}

/*
 * 函数名称：setPersonSpeed
 * 函数功能：通过数值设定速度
 */
void MazePerson::setPersonSpeed(long speed)
{
	//设置一个时间延迟的值
	personSpeed = speed;
	
}

/*
 *
 */
void MazePerson::start()
{
	int i = 0;
	while(!outOrNot)
	{
		gotoxy(0,15);
		cout << i;
		i++;
		moveForward();
	}
}

/*
 * 函数名称：moveForward
 * 函数功能：人向前走一步
 * 返回内容：YES:移动一次  NO:没有移动
 */
bool MazePerson::moveForward()
{
	
	//检查当前位置是否合法
	if(MazeMap::checkWallOrNot(positionX,positionY))
	{
		//检测到当前位置是墙，提示用户设计非法并返回
		gotoxy(0,23);
		cout << "检测到当前设定的起始位置是墙壁，请重新设定。" << endl;
		outOrNot = true;
		return NO;
	}
	//判断如果前一个位置的坐标是10000，则直接在当前位置绘制人
	if(preX == 10000 || preY == 10000)
	{
		gotoxy(positionX,positionY);
		cout << personPic;
		Sleep(5000);
	}
	//检查右侧是否是墙，如果是墙，检查前方是否是墙，如果不是墙则前进，前进后检查是否是出口
	int rightX;
	int rightY;

	int forwardX;
	int forwardY;
	
	switch(forward)
	{
	case SOUTH: rightX = positionX - 1; rightY = positionY; 
		forwardX = positionX; forwardY = positionY + 1; break; 
	case NORTH: rightX = positionX + 1; rightY = positionY; 
	    forwardX = positionX; forwardY = positionY - 1;	break;
	case WEST:  rightX = positionX; rightY = positionY - 1; 
		forwardX = positionX - 1; forwardY = positionY;	break;
	case EAST:  rightX = positionX; rightY = positionY + 1; 
		forwardX = positionX + 1; forwardY = positionY;	break;
	}
	//如果右侧是墙

	//system("PAUSE");

	if(MazeMap::checkWallOrNot(rightX,rightY))
	{

		//检测前方也是墙壁
		if(MazeMap::checkWallOrNot(forwardX,forwardY))
		{
			//按逆时针换一个方向
			turnLeft();
			return NO;
		}
		//检测前方是通路
		else
		{
			//向前移动
			goAhead();
			return YES;
		}
	}
	//如果右侧是通路
	else
	{
		Sleep(3000);
		turnRight();
		goAhead();
		return YES;
	}

}
