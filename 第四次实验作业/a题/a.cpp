#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int *p;
	int a = 0;
	int b = 0;
	p = new int[20];
	cout << "��Ϊ���ʮ��������ֵ��" << endl;
	for (int i =0; i<20;i++)
	{
		int a;
		cin >> a;
		p[i] = a;
	}
	//���� �����ĸ���
	for(int j=0;j<20;j++)
	{
		if (p[j] < 0)
			a++;
		else if (p[j] >0)
			b++;
	}
	cout << "�����ĸ���Ϊ��" << b << endl;
	cout << "�����ĸ���Ϊ��" << a << endl;
	//�����Ԫ�صľ�ֵ�ͷ���
	float c = 0;
	float sum = 0;
	for (int k = 0; k < 20; k++)
	{
		sum += p[k];
	}
	c = sum / 20;
	cout << "�����Ԫ�صľ�ֵΪ��" << c << endl;
	float s = 0;
	float z = 0;
	for (int i = 0; i < 20; i++)
	{
		z+= ((p[i] - c)*(p[i] - c));
	}
	s = z / 20;
	cout << "�����Ԫ�صķ���Ϊ��" << s << endl;
	//���մ�С����˳���������������
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			if (p[i]>p[i+j])
			{
				int temp;
				temp = p[i];
				p[i] = p[i + j];
				p[i + j] = temp;
			}
		}
	}
	cout << "���մ�С����˳���������������Ϊ��"<<endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << "  ";
	cout << endl;


	delete[]p;
	system("pause");
	return 0;
}