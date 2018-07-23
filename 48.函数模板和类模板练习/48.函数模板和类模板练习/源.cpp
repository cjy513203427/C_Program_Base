#include <iostream>
using namespace std;

/**
* 定义一个矩形类模板Rect
* 成员函数：calcArea()、calePerimeter()
* 数据成员：m_length、m_height
*/
//只需要T参数
template<typename T>
class Rect
{
public:
	Rect(T length, T height);
	T calcArea();
	T calePerimeter();
public:
	T m_length;
	T m_height;
};

/**
* 类属性赋值
*/
template<typename T>
Rect<T>::Rect(T length, T height)
{
	m_length = length;
	m_height = height;
}

/**
* 面积方法实现
*/
template<typename T>
T Rect<T>::calcArea()
{
	return m_length * m_height;
}

/**
* 周长方法实现
*/
template<typename T>
T Rect<T>::calePerimeter()
{
	return (m_length + m_height) * 2;
}

int main(void)
{
	Rect<int> rect(3, 6);
	cout << rect.calcArea() << endl;
	cout << rect.calePerimeter() << endl;
	system("pause");
	return 0;
}
