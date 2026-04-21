#include"../GFC/GFC.h" // 프로젝트 ->-헤더 ->메인
// .. : 이건 하나 위에 라는 뜻이다.
//하나 위에 GFC, 그리고 GFC.h이다.
// ./GFC.h 이건 자기 자신에서 헤더를 찾는 것이다. 



int main()
{

	MDoc doc;

	doc.Add(3);
	doc.Add(5);
	doc.Add(2);

	MView view(&doc);
	view.PrintGuGuDan();
	return 0;
}