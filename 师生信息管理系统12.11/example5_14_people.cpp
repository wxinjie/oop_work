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
	cout << "��������Ϣ\n";
	cout << "�� ���� ";
	cin >> name;
	cout << "�� �ţ�";
	cin >> number;
	int y, m, d;
	cout << "�������ڣ���� �·� ���ڣ���";
	cin >> y >> m >> d;
	birthday.Set(y, m, d);
	cout << "�� ��(m/f)��";
	cin >> sex;
}

void Person::Output()
{
	cout << "�� ��: " << name<<endl;
	cout << "�� ��: " << number<<endl;
	cout << "�� ��: ";
	if (sex == 'm')
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
	cout << "�������ڣ� " << birthday.GetYear() << '-' << birthday.GetMonth() << '-' << birthday.GetDay() << endl;
}

//Student
void Student::Input()
{
	Person::Input();
	cout << "ר ҵ�� ";
	cin >> speciality;
}

void Student::Output()
{
	Person::Output();
	cout << "ר ҵ��" << speciality << endl;
}

//Graduate
void Graduate::Input()
{
	Student::Input();
	cout << "�о����⣺ ";
	cin >> researchTopic;
}
void Graduate::Output()
{
	Student::Output();
	cout << "�о����⣺" << researchTopic << endl;
}

//Teacher

void Teacher::Input()
{
	Person::Input();
	cout << "ְ �ƣ� ";
	cin >> academicTitle;
}

void Teacher::Output()
{
	Person::Output();
	cout << "ְ �ƣ�" << academicTitle << endl;
}

//PostgraduateOnJob

void PostgraduateOnJob::Input()
{
	Graduate::Input();
	cout << "ְ �ƣ�";
	cin >> academicTitle;
}

void PostgraduateOnJob::Output()
{
	Graduate::Output();
	cout << "ְ �ƣ�" << academicTitle << endl;
}