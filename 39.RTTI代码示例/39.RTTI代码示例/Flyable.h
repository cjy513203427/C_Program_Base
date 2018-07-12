#pragma once
#ifndef  FLYABLE_H
#define FLYABLE_H
//接口类不可以实例化
//接口类，仅含有纯虚函数
//不需要析构函数和实现方法
//无需.cpp
class Flyable {
public:
	virtual void takeoff() = 0;
	virtual void land() = 0;
};

#endif // ! FLYABLE_H
