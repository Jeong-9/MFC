#include "Gugudan.h"
#include<stdio.h>

Gugudan::Gugudan()
{
	m_dan = 0;
}

Gugudan::Gugudan(int _dan)
{
	m_dan = _dan;
}

int Gugudan::GetDan()
{
	return this->m_dan;
}

int Gugudan::SetDan(int _dan)
{
	int OldDan = 0;
	OldDan = m_dan;
	m_dan = _dan;

	return OldDan;
}

int Gugudan::Print()
{
	int result = 0;

	for (int i = 1; i <= 9; ++i)
	{
		printf("%d x %d = [%2d] \t", m_dan, i, m_dan * i);
	}
	printf("\n");

	return result;

}