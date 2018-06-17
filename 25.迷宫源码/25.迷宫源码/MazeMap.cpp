/*--------------------------------------------*/
/* 文件名：MazeMap.cpp                        */
/* 文件内容：定义MazeMap类                    */
/* 作者：袁春旭                               */
/* 日期：2015年6月2日                         */
/*--------------------------------------------*/

/*
 * 类名称：MazeMap   
 * 功  能：生成并绘制迷宫地图
 * 函数列表：
 *		MazeMap() 
 *			功能：默认迷宫的构造函数
 *		MazeMap(int *mazeMap, int row, int column)      
 *			功能：声明设置迷宫长和宽的构造函数
 *		void MazeMap::setMazeMap(int *mazeMap,int row,int column)
 *			功能：重新设置迷宫地图
 *		void MazeMap::defaultMode()
 *			功能：默认模式
 *		void drawMap() const                           
 *			功能：声明绘制迷宫地图的函数
 *		bool checkWallOrNot(int mazeX,int mazeY) const 
 *			功能：声明检查是否遇到迷宫墙壁的函数
 *		bool checkMazeDoor(int mazeX,int mazeY) const  
 *			功能：声明检查是否遇到迷宫入口/出口的函数MazeMap
 */
#include <iostream>

using namespace std;

#include "MazeMap.h"
//初始化静态变量
char MazeMap::mazeRoad = ' ';
int MazeMap::mazeWidth = 0;
int MazeMap::mazeHeight = 0;
int MazeMap::mazeMapArray[screenHeight][screenWidth];
/*
 * 构造函数：MazeMap
 * 函数功能：默认初始化迷宫
 */
MazeMap::MazeMap():mazeWall('#')
{
	mazeWidth = 60;
	mazeHeight= 20;
}

/*
 * 构造函数：MazeMap
 * 函数功能：初始化迷宫的宽和高，墙壁和通路默认
 * 参数列表：
 *		row：迷宫地图数组的行数
 *		column：迷宫地图数组的列数
 */
MazeMap::MazeMap(int *mazeMap, int row, int column):mazeWall('#')
{
	//设置迷宫地图的高和宽
	mazeHeight = row;
	mazeWidth = column;
	//设置迷宫地图的内部路线
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			mazeMapArray[i][j] = *mazeMap;
			mazeMap++;
		}
	}
}

/*
 * 函数名称：setMazeMap
 * 函数功能：重新设置迷宫地图
 * 返回内容：无
 * 参数列表：
 *		*mazeMap：要拷贝的字符串首地址
 *		row：迷宫地图的行高
 *		column：迷宫地图的列宽
 */
void MazeMap::setMazeMap(int *mazeMap,int row,int column)
{
	//设置迷宫地图的高和宽
	mazeHeight = row;
	mazeWidth = column;
	//设置迷宫地图的内部路线
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			mazeMapArray[i][j] = *mazeMap;
			mazeMap++;
		}
	}
}


/*
 *
 */
void MazeMap::setMazeRoad(char road)
{
	mazeRoad = road;
}

/*
 *
 */
void MazeMap::setMazeWall(char wall)
{
	mazeWall = wall;
}

/*
 * 函数名称：defaultMode
 * 函数功能：使用默认地图
 * 返回内容：无
 */
void MazeMap::defaultMode()
{
	int mazeMap[6][6] = {
						{WALL,WALL,WALL,WALL,WALL,WALL},
						{WALL,WALL,WALL,WALL,ROAD,ROAD},
						{WALL,WALL,WALL,WALL,ROAD,WALL},
						{WALL,ROAD,ROAD,ROAD,ROAD,WALL},
						{WALL,ROAD,WALL,WALL,ROAD,WALL},
						{WALL,ROAD,WALL,WALL,WALL,WALL}
						};
	
	setMazeMap(&mazeMap[0][0],6,6);
}


/*
 * 函数名称：drawMap
 * 函数功能：绘制迷宫地图
 * 返回内容：无
 */
void MazeMap::drawMap() const
{
	for(int i=0;i<mazeHeight;i++)
	{
		for(int j=0;j<mazeWidth;j++)
		{
			if(mazeMapArray[i][j]==1)
			{
				cout << mazeWall;
			}
			else
			{
				cout << mazeRoad;
			}
		}
		cout << endl;
	}
}

/*
 * 函数名称：getRoadChar
 * 函数功能：获取表示通路的字符
 * 返回内容：表示通路的字符
 */
char MazeMap::getRoadChar()
{
	return mazeRoad;
}

/*
 * 函数名称：checkWallOrNot
 * 函数功能：静态方法，检查该位置上是否是墙壁
 * 返回内容：true:是  false:不是
 */
bool MazeMap::checkWallOrNot(int mazeX, int mazeY)
{
	if(mazeMapArray[mazeY][mazeX] == WALL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
 * 函数名称：checkMazeDoor
 * 函数功能：静态方法，检查该位置是否是出口
 * 返回内容：true:是  false:不是
 */
bool MazeMap::checkMazeDoor(int mazeX,int mazeY)
{
	//检查迷宫左右两侧
	if(mazeX == 0 || mazeX == (mazeWidth - 1))
	{
		if(mazeMapArray[mazeY][mazeX] == ROAD)
		{
			return true;
		}
	}
	//检查迷宫上下两侧
	if(mazeY == 0 || mazeY == (mazeHeight - 1))
	{
		if(mazeMapArray[mazeY][mazeX] == ROAD)
		{
			return true;
		}
	}
	return false;
}

