#pragma once
#ifndef _MVIEW_H
#define _MVIEW_H

// MView : 저장된 데이터를 출력하는 클래스, 데이터를 화면에 보여주고
class MView : MObject
{
public:
	MDoc* m_pDOc;
public:
	MView();
	MView(MDoc* _pDOc);

public:
	int PrintGuGuDan();

};

#endif