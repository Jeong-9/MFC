#include<stdio.h>
#include<iostream>
using namespace std;
void a1()
{
	printf("구구단 출력\n");

	for (int a = 1; a <= 9; ++a)
	{
		for (int i = 1; i <= 9; ++i)
		{
			printf("%d x %d = %d\n\n", a, i, a * i);
		}
	}
}

void a2()
{
	int i = 1;
	int a = ++i;
	int b = i++;

	int c = i++ + ++i;
	int d = ++i + i++;

	printf("%d %d %d %d", a, b, c, d);
}


void a3()
{
	for (int a = 9; a >= 1; --a)
	{
		printf("2 x %d = %d\n", a, 2 * a);
	}
}

void a4()
{
	for (int i = 1; i <= 9; ++i)
	{
		if (i % 2 == 0)
		{
			printf("2 x %d = %d\n", i, 2 * i);
		}
	}
}

void PrintDan(int dan)
{
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

/************************************************************************/

void gogodan()
{
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{	/*printf("%d x %d = %d\n", i, j, i * j);
		printf("\n");*/

			cout << i << "x" << j << "=" << i * j << "\t";
		}
		cout << "\n";
	}
	
}

void intdanlist(int dan)
{
	for (int j = 1; j <= 9; ++j)
	{
		printf("%d x %d = %d\n", dan, j, dan * j);
	}
}
	//******************************************************************//

class gugudan
{
public:
	int m_dan;

public:
	gugudan()
	{
		m_dan = 0;
	}
	gugudan(int _dan)
	{
		m_dan = _dan;
	}
	void printdan()
	{
		for (int i = 1; i <= 9; ++i)
		{
			printf("%d x %d = %2d\n", m_dan, i, m_dan * i);
		}
		return;
	}
	void PrintReverse()
	{
		for (int i = 9; i >= 1; --i)
		{
			printf("%d x %d = %d\n", m_dan, i, m_dan * i);
		}
	}

};

void a5()
{
	gugudan gugu(2);
	gugu.printdan();
	gugudan gugu1(3);
	gugu1.printdan();
	gugudan gugu2(4);
	gugu2.printdan();

}


void a6()
{
	gugudan gugu3(2);
	gugu3.PrintReverse();

}


//int main()
//{
//	//a1();
//	//a2();
//	//a3();
//	//a4();
//
//	//PrintDan(4);
//	//gogodan();
//	
//	/*int danlist[3] = {2, 4, 7};
//
//	for (int i = 0; i < 3; ++i)
//	{
//		intdanlist(danlist[i]);
//	}*/
//
//	//a5();
//	//a6();
//
//	return 0;
// 
//
//
// 
//}