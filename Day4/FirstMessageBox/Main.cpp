#include<windows.h>
#include<stdio.h>

int main()
{
	//MessageBoxA(NULL,"안녕", "일인자러러", MB_OKCANCEL);
	/*NULL: 부모 윈도우 핸들이 없다는 뜻, 즉 독립적으로 메시지 박스
	
	안녕": 메시지 박스 안에 표시될 텍스트.
	"일인자러러": 메시지 박스의 제목.

	MB_OKCANCEL: 확인(OK)과 취소(Cancel) 버튼을 표시하는 옵션
	*/
	//****************************************//
	//int result = MessageBoxW(NULL, L"저장?", L"질문", MB_OKCANCEL);

	//if (result == IDOK)
	//{
	//	printf("저장 했어\n");
	//}
	//else if (result == IDCANCEL)
	//{
	//	printf("저장 안됨\n");
	//}
	//*****************************************//
	//MessageBox(NULL,"5월 5일, 포켓몬 마라톤에 참석하겠나?", "질문", MB_OK|)

	return 0;
}