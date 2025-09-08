/*------------------------------
* バトル[battle.cpp]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#include "battle.h"
#include "main.h"
#include "time.h"

static TIME* g_pTime = g_pTime->GetTime();
void BATTLE::Initialize()
{
}

void BATTLE::Updata()
{
	if (g_pTime->m_CountTime != g_pTime->m_OldTime)
	{
		std::cout << "■";
	}
}

void BATTLE::Draw()
{
}

void BATTLE::Finalize()
{
}
