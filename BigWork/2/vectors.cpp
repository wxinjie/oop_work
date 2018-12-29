/*************************************************
** 源文件   : vectors.cpp
** 功能说明 : Function Definations
** 创建时间 : 2018-12-17/16:35
/**************************************************/

/*----------------头文件引入--------------*/

#include "vectors.h"

//------------------第一类函数：构造函数--------------------

vectors::vectors()//无参构造
{
	

	cout << "empty vectors() is called" << endl;

}

vectors::vectors(float _x, float _y)//有参构造
{
	this->x = _x;
	this->y = _y;

	cout << "vectors() is called" << endl;

}

vectors::vectors(const vectors &r)//拷贝构造
{
	this->x = r.x;
	this->y = r.y;
}



//------------------第二类函数：析构函数--------------------

vectors::~vectors()
{
	cout << "~vectors() is called" << endl;
	//getchar();


}

//------------------第三类函数：普通成员函数--------------------

float vectors::getX()
{
	return this->x;
}

float vectors::getY()
{

	return this->y;
}



//成员函数重载加法运算符
vectors&  vectors::operator+(const vectors &other)
{

	this->x = this->x + other.x;
	this->y = this->y + other.y;

	return *this;
}

//------------------其他函数：友元函数（类外函数）--------------------

//友元函数重载减法运算符
 vectors& operator-(const vectors &r1, const vectors &r2)
{

	 vectors temp;  //创建一个局部临时对象

	 temp.x = r1.x - r2.x;
	 temp.y = r1.y - r2.y;

	 return temp; // 返回后，临时对象被析构掉

}


