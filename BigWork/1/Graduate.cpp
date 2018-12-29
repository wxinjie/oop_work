/*************************************************
** 源文件   : Graduate.cpp
** 功能说明 : Function Definations
** 创建时间 : 2018-12-17/15:51
/**************************************************/


#include "Graduate.h"


int Graduate::obj_count = 0;

float Graduate::obj_score = 0.0;

/*---------------------------第一类函数-----------------------------------*/

//无参构造函数
Graduate::Graduate()
{
	cout << "empty Graduate() is called" << endl;

	obj_count++; ////只要创建对象，就在构造函数里累加一次
}

//普通有参构造函数
Graduate::Graduate(const char *na, const char* num, float sc, const char *re, const char *tu)
{

	if (na)
	{
		name = new char[strlen(na) + 1];

		strcpy(name, na);
	}
	else name = 0;


	if (num)
	{
		id = new char[strlen(num) + 1];

		strcpy(id, num);
	}
	else id = 0;


	score = sc;
	obj_score += score;  //统计每个对象的总成绩

	if (re)
	{
		research = new char[strlen(re) + 1];

		strcpy(research, re);
	}
	else research = 0;

	if (tu)
	{
		tutor = new char[strlen(tu) + 1];
		strcpy(tutor, tu);
	}
	else tutor = 0;


	cout << "General Graduate() is called" << endl;
	obj_count++; //只要创建对象，就在构造函数里累加一次


}

//拷贝构造函数
Graduate::Graduate(const Graduate &r)
{

	obj_count++;
	//拷贝name
	if (r.name)
	{
		name = new char[strlen(r.name) + 1];//注意：不要用sizeof(r.name),因为它是算变量字节的，不是算长度的
		strcpy(name, r.name);

	}
	else name = 0;


	//拷贝学号
	if (r.id)
	{
		id = new char[strlen(r.id) + 1];
		strcpy(id, r.id);
	}
	else id = 0;


	//拷贝成绩
	score = r.score;
	obj_score += score;  //累加每个对象的总成绩

	//拷贝研究领域
	if (r.research)
	{
		research = new char[strlen(r.research) + 1];
		strcpy(research, r.research);

	}
	else research = 0;

	//拷贝导师
	if (r.tutor)
	{
		tutor = new char[strlen(r.tutor) + 1];
		strcpy(tutor, r.tutor);
	}
	else tutor = 0;

	cout << "copy Graduate() is called" << endl;


}
/*---------------------------第二类函数-----------------------------------*/

//析构函数
Graduate::~Graduate()
{

	if (name)
	{
		delete []name;
	}

	if (id)
	{
		delete []id;
	}
	if (research)
	{
		delete []research;
	}

	if (tutor)
	{
		delete []tutor;
	}


	cout << "~Graduate() is called" << endl;

	getchar();
}

/*---------------------------第三类函数-----------------------------------*/

//普通函数-基本函数
char* Graduate::getName()
{
	return name;
}
char* Graduate::getID()
{
	return id;

}
float Graduate::getScore()
{
	return this->score;

}
char*  Graduate::getResearch()
{
	return research;

}
char*  Graduate::getTutor()
{
	return tutor;

}


//成员函数形式重载赋值运算符函数=
Graduate&  Graduate::operator=(const Graduate &r)
{
	cout << "operator=() is called" << endl;

	//拷贝姓名
	if (name)
	{
		delete []name;
	}
	if (r.name)
	{
		name = new char[strlen(r.name) + 1];
		strcpy(name, r.name);
	}
	else name = 0;



	//拷贝学号
	if (id)
	{
		delete []id;
	}
	if (r.id)
	{
	     id = new char[strlen(r.id) + 1];
		strcpy(id, r.id);
	}
	else id = 0;

	//拷贝成绩
	score = r.score;
	obj_score += score;  //统计每个对象的总成绩

	//拷贝研究领域
	if (research)
	{
		delete []research;
	}

	if (r.research)
	{
		research = new char[strlen(r.research) + 1];
		strcpy(research, r.research);
	}
	else research = 0;


	//拷贝导师
	if (tutor)
	{
		delete []tutor;
	}
	if (r.tutor)
	{
		tutor = new char[strlen(r.tutor) + 1];
		strcpy(tutor, r.tutor);
	}
	else tutor = 0;
	

	return *this;

}


//类中的静态成员函数
float Graduate::obj_AverageScore()
{
	return float(obj_score / obj_count);  //强制转换

}

/*---------------------------第四类函数-----------------------------------*/

//类外函数-友元函数
char OutputGrade(Graduate &stu)
{

	char temp;
	if (stu.getScore() >= 90)
	{
		temp = 'A';
	}
	else if (stu.getScore() >= 80)
	{
		temp = 'B';

	}
	else if (stu.getScore() >= 70)
	{
		temp = 'C';

	}
	else if (stu.getScore() >= 60)
	{
		temp = 'D';
	}
	else
	{
		temp = 'E';

	}

	cout << "该研究生成绩"<<stu.getScore()<<", 等级：" << temp << endl;

	return temp;

}


