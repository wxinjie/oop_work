/*************************************************
** 功能 : 类的设计与应用（作业1参考答案） 
** 作者 : Qingke Zhang/tsingke@sdnu.edu.cn
** 版本 : 2018-12-17 / 16:16
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include "Graduate.h"
#include <windows.h>

int  main()
{
	//1.创建4个研究生对象（注：普通构函，拷贝构函，赋值重载=★实现对象初始化）
	Graduate G1("zhang", "2017001", 87, "hpc", "Mao");
	Graduate G2("wang", "2017002", 98, "ml", "Mao");

	Graduate G3(G1);   //调用拷贝构造函数完成G3初始化

	Graduate G4;
	G4 = G2;           //调用赋值运算符函数对G4初始化


	//2.输出研究生成绩等级（注：友元函数实现★）

	OutputGrade(G1);
	OutputGrade(G2);
	OutputGrade(G3);
	OutputGrade(G4);


	//3.计算所有研究生对象平均成绩(注：静态共享成员和函数实现★★★★★）;

	cout << "研究生对象总数为：" << Graduate::obj_count << endl;
	cout << "研究生平均成绩为：" << Graduate::obj_AverageScore() << endl;



	system("pause");
	return 0;
}