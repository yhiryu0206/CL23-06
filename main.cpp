/*------------------------------
* メイン[main.cpp]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#include <iostream>

#pragma comment(lib, "winmm.lib")
#include "main.h"
#include "scene.h"
#include "game.h"
#include "time.h"

//Windowの左上生成位置
static constexpr int WINDOWPOS_X = 175;
static constexpr int WINDOWPOS_Y = 50;

//Windowのサイズ
static constexpr int SCREEN_WIDT = 100;
static constexpr int SCREEN_HEIGHT = 25;

static MAIN g_Main;
static SCENE g_SCENE;
static GAME g_Game;
static TIME g_Time;

int main(void)
{
	g_Main.Initialize();

	while (true)
	{
		g_Main.Updata();
		g_Main.Draw();
	}

	g_Main.Finalize();

	return 0;
}

void MAIN::Initialize()
{
	//ウィンドウ情報の初期化
	WindowConsoleInitialize();
	g_Time.Initialize();

}

void MAIN::Updata()
{
	g_Time.Updata();
}

void MAIN::Draw()
{
}

void MAIN::Finalize()
{
}

// =============================================================================
// ウィンドウ設定の初期化（HEWから持ってきた設定）
// =============================================================================
void MAIN::WindowConsoleInitialize()
{
	// Set console window position
	HWND consoleWindow = GetConsoleWindow();
	int x, y;
	x = WINDOWPOS_X;
	y = WINDOWPOS_Y;
	SetWindowPos(consoleWindow, 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	// Set console window size
	SMALL_RECT windowSize = { 0, 0, SCREEN_WIDT, SCREEN_HEIGHT };
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
	// Set console buffer size
	// ウィンドウサイズは80, 25で固定すること
	COORD coord;
	coord.X = SCREEN_WIDT;
	coord.Y = SCREEN_HEIGHT;
	SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	// Set console font style and size
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	// ↓フォントサイズのみ変更可↓
	cfi.dwFontSize.X = 15;                   // Width of each character in the font
	cfi.dwFontSize.Y = 30;                   // Height
	// ↑フォントサイズのみ変更可↑
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"MS Gothic");       // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}


