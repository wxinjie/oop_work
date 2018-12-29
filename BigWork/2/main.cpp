/*************************************************
** 功能 :  友元函数重载运算符+和运算符- 
** 作者 : Qingke Zhang/tsingke@sdnu.edu.cn
** 版本 : 2018-12-17 / 16:34
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include "vectors.h"
#include <windows.h>

using namespace std;

/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{

	
	vectors A(1,3), B(4, 2);

	vectors C, D;

	C = A + B; 
	D = A - B;


	cout << "A+B= (" << C.getX() << " , " << C.getY() << ")" << endl;
	cout << "A-B= (" << D.getX() << " , " << D.getY() << ")" << endl;



	system("pause");
	
	return 0;
}