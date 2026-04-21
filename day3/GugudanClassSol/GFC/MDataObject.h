#pragma once
#ifndef _MDATAOBJECT_H
#define _MDATAOBJECT_H
#include"MObject.h"


// MDataObject : 데이터 계열 중간 부모 클래스
// MObject를 상속받는 데이터 계열용 중간 클래스야.
class MObject;

class MDataObject:MObject
{
public:
	MDataObject();
};

#endif // _MDATAOBJECT_H

// 현재 상태에서는 생성자만 있고 실질 기능은 거의 없어.
//하지만 구조상 MDoc가 바로 MObject를 상속받지 않고,
//한 단계 중간 부모를 두는 형태야.