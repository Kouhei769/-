#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SetWindowText(L"2016216ó—çqïΩ");
	SetGraphMode(960, 540, 32);
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0)
	{
		ScreenFlip();
	}

	DxLib_End();
}