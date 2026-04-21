#include "MObject.h"

#include"MDataObject.h"

#include"MDoc.h"

#include "MVIew.h"

MView::MView()
{
	m_pDOc = NULL;

}
MView::MView(MDoc* _pDOc)
{
	m_pDOc = _pDOc;
}
int MView::PrintGuGuDan()
{
	int count = 0;
	if (m_pDOc == NULL)
	{

	}
	else {
		for (int indexArray = 0; indexArray < m_pDOc->CurrentArrayCount(); ++indexArray) // 여기는 특정 구구단을 지칭하는 반복문
		{
			int danValue = m_pDOc->GetArrayValueByIndex(indexArray);

			for (int i = 1; i <= 9; ++i)
			{
				// 특정 구구단 숫자가 들어오면 곱해지는 숫자 반복문
				//danValue
				printf("%d X %d = [%2d]", danValue, i, danValue * i);
			}
			printf("\n");
			count += 1;
		}

	}
	return count;
}