#pragma once

#ifndef _MDOC_H
#define _MDOC_H

#define MAX_GUGU_ARRAY 10

// MDoc : 실제 데이터 저장 클래스, 데이터를 관리
class MDoc : MDataObject
{
private:
	int m_GuGuArray[MAX_GUGU_ARRAY];
	/*m_GuGuArray : 구구단 숫자들을 저장하는 배열*/
	int m_count;
	// m_count : 현재 배열에 몇 개 들어 있는지 저장

public:
	MDoc();

public:
	int CurrentArrayCount();
	int GetArrayValueByIndex(int _index);
	int Add(int _value);
	/*실제로 구구단에 사용할 숫자들(단) 을 저장하는 역할*/

};


#endif