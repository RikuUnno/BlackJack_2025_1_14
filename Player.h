#pragma once

#include "Person.h"

//プレイヤークラス
class Player : public Person
{
protected:
	//ゲーム実行
	void playBase(Shoe* shoe) override;

};
