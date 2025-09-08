/*------------------------------
* シーン[game.cpp]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#include <iostream>

#pragma comment(lib, "winmm.lib")
#include "game.h"
#include "game.h"
#include "time.h"

static constexpr int SCREEN_WIDT(80);
static constexpr int SCREEN_HEIGHT(25);

static GAME g_Scene;
static GAME g_Game;
static TIME g_Time;

int game(void)
{
	g_Game.Initialize();

	while (true)
	{
		g_Game.Updata();
		g_Game.Draw();
	}

	g_Game.Finalize();

	return 0;
}

void GAME::Initialize()
{
	g_Time.Initialize();
	g_Game.Initialize();
	
}

void GAME::Updata()
{
	g_Time.Updata();
	g_Game.Updata();
}

void GAME::Draw()
{
	g_Game.Draw();
}

void GAME::Finalize()
{
	g_Time.Finalize();
	g_Game.Finalize();
}
