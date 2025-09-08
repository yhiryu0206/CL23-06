/*------------------------------
* シーン[scene.h]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

class SCENE
{
public:

	void Initialize();
	void Updata();
	void Draw();
	void Finalize();

};

enum GAMESTATE
{
	STATE_TITLE=0,
	STATE_GAME,
	STATE_BATTLE,
	STATE_RESULT,

};
#endif // !SCENE_H
