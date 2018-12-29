/*************************************************
** 头文件   : Graduate.h
** 功能说明 : 研究生类定义
** 创建时间 : 2018-12-17/10:49
/**************************************************/

#ifndef _GRADUATE_H_
#define _GRADUATE_H_

#include <string>
#include <iostream>
using namespace std;

class Graduate
{

private:

	char *name;
	char *id;
	float score;
	char *research;
	char *tutor;

public:

	//公有静态共享数据
	static int obj_count;    //累加类创建的对象数目
	static float obj_score;  //累加所有对象的总成绩

	//1.构造函数
	Graduate();
	Graduate(const char *na, const char *num, float score, const char *re, const char *tu);
	Graduate(const Graduate &r);

	//2.析构函数
	~Graduate();


	//3.普通函数-基本函数
	char* getName();
	char* getID();
	float getScore();
	char* getResearch();
	char* getTutor();



	//3.普通函数-重载运算符函数=
	Graduate& operator=(const Graduate &r);


	//4. 静态共享函数-计算所有对象的成绩均值
	static float obj_AverageScore();


	//5.友元函数（类外函数），输出研究生成绩等级
	friend char OutputGrade(Graduate &stu);


};


#endif
