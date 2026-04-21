#pragma once
// MObject : 가장 기본이 되는 부모 클래스

#ifndef _MOBJECT_H
#define _MOBJECT_H
#include <stdio.h>

class MObject
{
public: 
	virtual int Update();// “자식 클래스에서 필요하면 재정의할 수 있다”
};

#endif