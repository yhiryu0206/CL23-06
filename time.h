/*------------------------------
* タイム[time.h]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#ifndef TIME_H
#define TIME_H
#include "scene.h"

class TIME :public SCENE
{
public:
	void Initialize();
	void Updata();
	void Draw();
	void Finalize();

	TIME* GetTime();

	double m_FirstTime = 0;
	double m_CountTime = 0;
	double m_OldTime = 0;

};


#endif // !TIME_H
