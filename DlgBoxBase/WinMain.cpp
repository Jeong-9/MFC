#include <windows.h>
#include"resource.h"

INT_PTR CALLBACK MainDlgProc(
	HWND _hDlg, UINT _msg,
	WPARAM _wParam, LPARAM _lParam) {
	switch (_msg) {
	case WM_INITDIALOG: {
		HWND hEdit;
		hEdit = GetDlgItem(_hDlg,
			IDC_EDIT_HELLO);
		if (hEdit != NULL) {
			SetWindowTextW(hEdit,
				L"일인자돌아왔다");
		}
		return TRUE;
	}
	case WM_COMMAND: {
		int id = LOWORD(_wParam);
		int code = HIWORD(_wParam);
		HWND hCtrl = (HWND)_lParam;
		if (id == IDC_BUTTON1 &&
			code == BN_CLICKED) {

			SetWindowPos(
				hCtrl, NULL,
				150, 150, 120, 40,
				SWP_NOZORDER);

			SetWindowTextW(hCtrl, L"버튼클릭!");
			return TRUE;
		}
		return FALSE;
	}
	case WM_CLOSE: {
		EndDialog(_hDlg, IDCANCEL);
		return TRUE;
	}
	}
	return FALSE;
}

int APIENTRY wWinMain(HINSTANCE _hInst, HINSTANCE, LPWSTR, int) {
	INT_PTR ret;
	ret = DialogBoxParamW(
		_hInst,
		MAKEINTRESOURCEW(IDD_MAIN_DLG),
		NULL,
		MainDlgProc,
		0);
	return 0;
}