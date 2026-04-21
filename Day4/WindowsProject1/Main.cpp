//#include <Windows.h>
//
//LRESULT CALLBACK MyWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//
//
//int WinMain(HINSTANCE _hInstance,
//	HINSTANCE _hPrevInstance,
//	LPSTR _lpCmdLine,
//	int _nShowCmd) {
//	wchar_t szClassName[] = L"MyWindowClass";
//	WNDCLASSEXW wc;
//	ZeroMemory(&wc, sizeof(wc));
//	wc.cbSize = sizeof(wc);
//	wc.style = CS_HREDRAW | CS_VREDRAW;
//	wc.lpfnWndProc = MyWindowProc;
//	wc.cbClsExtra = 0;
//	wc.cbWndExtra = 0;
//	wc.hInstance = _hInstance;
//	wc.hIcon = LoadIconW(NULL, IDI_APPLICATION);
//	wc.hCursor = LoadCursorW(NULL, IDC_ARROW);
//	wc.lpszMenuName = NULL;
//	wc.lpszClassName = szClassName;
//	wc.hIconSm = NULL;
//	if (!RegisterClassExW(&wc)) {
//		return 0;
//	}
//	HWND hWnd = CreateWindow(
//		szClassName, L"여기는 윈도우 제목들어가는곳",
//		WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT, CW_USEDEFAULT, 800, 600,
//		NULL, NULL, _hInstance, NULL);
//	if (!hWnd) {
//		return 0;
//	}
//	ShowWindow(hWnd, _nShowCmd);
//	UpdateWindow(hWnd);
//	MSG msg;
//	while (GetMessageW(&msg, NULL, 0, 0)) {
//		TranslateMessage(&msg);
//		DispatchMessageW(&msg);
//	}
//	return (int)msg.wParam;
//}
//LRESULT CALLBACK MyWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//	switch (uMsg) {
//	case WM_CREATE: {
//		CreateWindow(
//			L"EDIT", L"일인자 화장실 가다!~",
//			WS_CHILD | WS_VISIBLE | WS_BORDER | ES_MULTILINE,
//			50, 50, 400, 400,
//			hwnd, (HMENU)1, NULL, NULL);
//		break;
//	}
//	case WM_DESTROY:
//		PostQuitMessage(0);
//		return 0;
//	case WM_PAINT: {
//		PAINTSTRUCT ps;
//		HDC hdc = BeginPaint(hwnd, &ps);
//		FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));
//		EndPaint(hwnd, &ps);
//		return 0;
//	}
//	}
//	return DefWindowProc(hwnd, uMsg, wParam, lParam);
//}