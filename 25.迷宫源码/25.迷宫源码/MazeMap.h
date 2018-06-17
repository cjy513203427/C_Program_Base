/*--------------------------------------------*/
/* 文件名：MazeMap.h                          */
/* 文件内容：定义MazeMap类                    */
/* 作者：袁春旭                               */
/* 日期：2015年6月2日                        */
/*--------------------------------------------*/

/*
 * 类名称：MazeMap   
 * 功  能：生成并绘制迷宫地图
 */
#ifndef MAZEMAP_H_
#define MAZEMAP_H_

#define screenWidth 80    //字符模式下屏幕宽度
#define screenHeight 25   //字符模式下屏幕高度
//#define WALL 1            //定义墙壁用1表示
//#define ROAD 0            //定义通道用0表示

#include "Public.H"

class MazeMap
{
public:
	MazeMap();										     //构造函数，使用默认的地图
	//构造函数，使用用户自定义的地图。
	//*mazeMap 地图二维数组首地址；row 地图数组中的行数；column 地图数组中的列数
	MazeMap(int *mazeMap, int row, int column);		
	void setMazeWall(char wall);                         //设置表示墙的字符
	void setMazeRoad(char road);					     //设置表示路的字符
	void defaultMode();                                  //设置迷宫的默认地图
	void setMazeMap(int *mazeMap,int row,int column);    //重新设置迷宫地图
	void drawMap() const;                                //声明绘制迷宫地图的函数
	static char getRoadChar();                           //获取表示通路的字符
    static bool checkWallOrNot(int mazeX,int mazeY);     //声明检查是否遇到迷宫墙壁的函数
	static bool checkMazeDoor(int mazeX,int mazeY);      //声明检查是否遇到迷宫入口/出口的函数

private:

	char mazeWall;                     //声明迷宫表示墙壁的字符
	static char mazeRoad;              //声明迷宫表示通路的字符
	static int mazeWidth;              //声明迷宫的宽度
	static int mazeHeight;             //声明迷宫的高度
	static int mazeMapArray[screenHeight][screenWidth];//声明迷宫的地图数组

};
#endif //MAZEMAP_H_