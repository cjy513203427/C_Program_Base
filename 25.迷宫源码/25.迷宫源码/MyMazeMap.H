/*
 * 文件名称：MyMazeMap.H
 * 文件功能：提供悦宫地图操作的相关类
 */

/*
 * 类名称：MyMazeMap
 * 类功能：MazeMap的代理类，封装MazeMap类
 * 方法列表：
 * 
 */

#ifndef MymazeMap_H_
#define MymazeMap_H_




class MazeMap;              //声明被代理的类

class MyMazeMap
{
public:
	MyMazeMap();			                             //声明MyMazeMap的构造方法
	//构造函数，使用用户自定义的地图。
	//*mazeMap 地图二维数组首地址；row 地图数组中的行数；column 地图数组中的列数
	MyMazeMap(int *mazeMap, int row, int column);	
	~MyMazeMap();			                             //声明MyMazeMap的析构方法
	void setMazeWall(char wall);                         //设置表示墙的字符
	void setMazeRoad(char road);					     //设置表示路的字符
	void defaultMode();                                  //设置迷宫的默认地图
	void setMazeMap(int *mazeMap,int row,int column);    //重新设置迷宫地图
	void drawMap() const;                                //声明绘制迷宫地图的函数

private:
	MazeMap *mazeMap;       //声明被代理类型的指针
};

#endif //MymazeMap_H_