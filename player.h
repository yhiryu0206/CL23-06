/*------------------------------
* プレイヤー[player.h]
*
* 制作者：yhiryu		日付：2025/9/4
------------------------------*/
#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class PLAYER : public CHARACTER
{
public:

	void Initialize();
	void Updata();
	void Draw();
	void Finalize();

	PLAYER* GetPlayer();
};



#endif // !PLAYER_H