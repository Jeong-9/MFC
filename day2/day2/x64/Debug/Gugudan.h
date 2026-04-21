#pragma once
#ifdef  Gugudan_Class
#include<stdio.h>
#endif //  Gugudan_Class

class Gugudan
{
public:
	int m_dan;

public:
	Gugudan();
	Gugudan(int _dan);

	void printdan();
	void PrintReverse();
};

