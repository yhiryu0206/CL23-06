/*------------------------------
* タイム[time.cpp]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#include "time.h"
#include "main.h"

static TIME g_Time;
static constexpr int g_TimeAdjust = 500;

void TIME::Initialize()
{
	m_FirstTime = timeGetTime() / g_TimeAdjust;
	m_CountTime = 0;
	m_OldTime = 0;
}

void TIME::Updata()
{
	m_CountTime = timeGetTime() / g_TimeAdjust;
	m_CountTime -= m_FirstTime;
	if (m_CountTime != m_OldTime)
	{
		std::cout << "\x1b[48;2;100;0;0m ";
		m_OldTime = m_CountTime;
	}
}

void TIME::Draw()
{

}

void TIME::Finalize()
{
}

TIME* TIME::GetTime()
{
	return &g_Time;
}
