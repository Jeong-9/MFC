#pragma once

#ifndef _GUGUDAN_H
#define _GUGUDAN_H


class Gugudan
{
private:
	int m_dan;
public:

	Gugudan();
	Gugudan(int _dan);


public:
	int GetDan();
	int SetDan(int _dan);
	int Print();
};


#endif
