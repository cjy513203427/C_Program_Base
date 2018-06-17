/*
 * 文件名称：MyMazeMap.cpp
 * 文件功能：实现代理类MyMazeMap
 */

/*
 * 函数名称：MyMazeMap
 * 函数功能：代理类的构造函数
 */

#include "MazeMap.H"
#include "MyMazeMap.H"

MyMazeMap::MyMazeMap()//: mazeMap(new MazeMap)
{
	mazeMap = new MazeMap;
	//empty
}

/*
 * 函数名称：MyMazeMap
 * 函数功能：代理类的构造函数
 * 参数列表：
 *		*myMazeMap: 迷宫地图的数组首地址
 *		row: 迷宫数组的行数
 *		column: 迷宫数组的列数
 */
MyMazeMap::MyMazeMap(int *myMazeMap, int row, int column) //: mazeMap(new MazeMap(myMazeMap, row, column))
{
	mazeMap = new MazeMap(myMazeMap, row, column);
	//empty
}

/*
 * 函数名称：defaultMode
 * 函数功能：代理使用默认地图
 */
void MyMazeMap::defaultMode()
{
	mazeMap->defaultMode();
}

/*
 * 函数名称：drawMap
 * 函数功能：代理使用绘制迷宫地图
 */
void MyMazeMap::drawMap() const
{
	mazeMap->drawMap();
}

/*
 * 函数名称：setMazeMap
 * 函数功能：代理使用设置加载迷宫地图
 */
void MyMazeMap::setMazeMap(int *myMazeMap, int row, int column)
{
	mazeMap->setMazeMap(myMazeMap, row, column);
}

/*
 * 函数名称：setMazeRoad
 * 函数功能：代理使用设置绘制迷宫的通路字符
 */
void MyMazeMap::setMazeRoad(char road)
{
	mazeMap->setMazeRoad(road);
}

/*
 * 函数名称：setMazeWall
 * 函数功能：代理使用设置绘制迷宫的墙壁字符
 */
void MyMazeMap::setMazeWall(char wall)
{
	mazeMap->setMazeWall(wall);
}

/*
 * 函数名称：~MyMazeMap
 * 函数功能：释放内存对象
 */
MyMazeMap::~MyMazeMap()
{
	delete mazeMap;
}