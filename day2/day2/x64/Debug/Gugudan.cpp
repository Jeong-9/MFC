#include "Gugudan.h"
#include<stdio.h>
#include<iostream>

using namespace std;

Gugudan::Gugudan()
{
	m_dan = 0;
}
Gugudan::Gugudan(int _dan)
{
	m_dan = _dan;
}

void Gugudan::printdan()
{
	for (int i = 1; i <= 9; ++i)
	{
		printf("%d x %d = %d\n", m_dan, i, m_dan * i);
	}
	return;
}

void Gugudan::PrintReverse()
{
	for (int i = 9; i >= 1; --i)
	{
		printf("%d x %d = %2d\n", m_dan, i, m_dan * i);
	}
	return;
}
