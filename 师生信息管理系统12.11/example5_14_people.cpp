//example5_14_people.cpp
#include"example5_14_people.h"
//Date
void Date::Set(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

int Date::GetYear()
{
	return year;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetDay()
{
	return day;
}

//Person
Person::Person()
{
	strcpy(name, "00");
}
char * Person::GetName()
{
	return name;
}

void Person::Input()
{
	cout << "请输入信息\n";
	cout << "姓 名： ";
	cin >> name;
	cout << "编 号：";
	cin >> number;
	int y, m, d;
	cout << "出生日期（年份 月份 日期）：";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "性 别(m/f)：";
	cin >> sex;
}

void Person::Output()
{
	cout << "姓 名: " << name<<endl;
	cout << "编 号: " << number<<endl;
	cout << "性 别: ";
	if (sex == 'm')
		cout << "男" << endl;
	else
		cout << "女" << endl;
	cout << "出生日期： " << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;
}

//Student
void Student::Input()
{
	Person::Input();
	cout << "专 业： ";
	cin >> speciality;
}

void Student::Output()
{
	Person::Output();
	cout << "专 业：" << speciality << endl;
}

//Graduate
void Graduate::Input()
{
	Student::Input();
	cout << "研究课题： ";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "研究课题：" << researchTopic << endl;
}

//Teacher

void Teacher::Input()
{
	Person::Input();
	cout << "职 称： ";
	cin >> academicTitle;
}

void Teacher::Output()
{
	Person::Output();
	cout << "职 称：" << academicTitle << endl;
}

//PostgraduateOnJob

void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "职 称：";
	cin >> academicTitle;
}

void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "职 称：" << academicTitle << endl;
}