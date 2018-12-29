/*************************************************
* Head File   : vectors.h
* File Usage  : 向量类
* Create Time : 2018-12-17/16:34
/**************************************************/

#ifndef __VECTORS_H__
#define __VECTORS_H__


#include <iostream>
using namespace  std;


//---------------------定义vectors类-----------------
class vectors
{

private:

	float x;
	float y;

public:
	vectors();
	vectors(float _x, float _y);
	vectors(const vectors &r);

	~vectors();


	float getX();
	float getY();


	//成员函数形式重载运算符+（只需要提供1个对象参数）
	vectors& operator+(const vectors &other);

	//友元函数形式重载运算符-（需要提供2个参数）
	friend vectors& operator-(const vectors &r1, const vectors &r2);



};


#endif

