#include<iostream>
#include<windows.h>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25)
		throw age;
	else if (score < 0 || score>5)
		throw score;
	else
		return score * 20;
}
int main()
{
	char n[10];
	int age;
	float score;
	cout << "������ѧ��������";
	cin >> n;
	cout << "���������䣨��������䷶ΧΪ16~25����";
	cin >> age;
	cout << "�������弶��C++���Կ��Է���������ΧΪ0~5��:";
	cin >> score;
	cout << endl;

	try
	{
		cout << "��ѧ���İٷ��Ƴɼ�Ϊ��" << checkAgeScore(age, score) << endl;
	}
	catch (int)
	{
		cout << "��������䲻�ں���Χ�ڣ�" << endl;
	}
	catch (float)
	{
		cout << "������弶��C++���Կ��Է������ں���Χ�ڣ�" << endl;
	}
	system("pause");
	return 0;
}