/*------------------------------
* メイン[main.cpp]
*
* 制作者：山室飛龍		日付：2025/9/4
------------------------------*/
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include "main.h"
#include "game.h"

static MAIN g_main;
static GAME g_game;

int main(void)
{
	g_main.Initialize();

	while (true)
	{
		g_main.Updata();
		g_main.Draw();
	}

	g_main.Finalize();

	return 0;
}



void MAIN::Initialize()
{
	firstTime = timeGetTime() / 1000;
	g_game.Initialize();
	
}

void MAIN::Updata()
{

	nowtime = timeGetTime()/1000;
	nowtime -= firstTime;
	std::cout << "fps" << nowtime<<std::endl;	
	g_game.Updata();
}

void MAIN::Draw()
{
	g_game.Draw();
}

void MAIN::Finalize()
{
	g_game.Finalize();
}
