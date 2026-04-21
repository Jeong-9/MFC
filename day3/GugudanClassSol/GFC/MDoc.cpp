#include "MObject.h"
#include "MDataObject.h"
#include "MDoc.h"

// 객체가 만들어질 때 자동으로 실행돼
MDoc::MDoc()
{
	m_count = 0;

	for (int i = 0; i < MAX_GUGU_ARRAY; ++i)
	{
		m_GuGuArray[i] = 0;

	}

}
//배열에 단 값을 하나 추가하는 함수야.
int MDoc::Add(int _value)
{
	int count = 0;

	if (m_count < 0 || m_count >= MAX_GUGU_ARRAY)
	{
		count = m_count;
		return count;
	}
	else
	{
		m_GuGuArray[m_count] = _value;
		m_count += 1;

		printf("m_GuguArray[%d] m_Count[%d]\n", m_GuGuArray[m_count - 1], m_count);
	}
	count = m_count;
	return count;


}

int MDoc::CurrentArrayCount()
{
	return m_count;
}

int MDoc::GetArrayValueByIndex(int _index)
{
	if (_index < 0 || _index >= m_count)
		return -1;

	return m_GuGuArray[_index];
}

