#ifndef Public_H_
#define Public_H_

const int FAST = 1;           //定义人的移动速度快速
const int MIDD = 2;			  //定义人的移动速度中速
const int SLOW = 3;			  //定义人的移动速度慢速

const int WALL = 1;           //定义墙壁用1表示
const int ROAD = 0;           //定义通道用0表示

enum objectiveDirections
{
	SOUTH,NORTH,WEST,EAST         //南(上)，北(下)，西(左)，东(右)
};


#endif //Public_H_