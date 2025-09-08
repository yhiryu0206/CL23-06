/*------------------------------
* バトル[battle.h]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#ifndef BATTLE_H
#define BATTLE_H
#include "scene.h"


class BATTLE : public SCENE
{
public:
	void Initialize();
	void Updata();
	void Draw();
	void Finalize();

};


#endif // !BATTLE_H
