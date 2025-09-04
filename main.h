/*------------------------------
* メイン[main.h]
*
* 制作者：山室飛龍		日付：2025/9/4
------------------------------*/
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
class MAIN
{
public:
	double firstTime = 0;
	double nowtime = 0;

	void Initialize();
	void Updata();
	void Draw();
	void Finalize();

};

enum GAMESTATE
{
	TITLE=0,
	TEST,
	BATTLE,
	RESULT,

};
#endif // !MAIN_H
