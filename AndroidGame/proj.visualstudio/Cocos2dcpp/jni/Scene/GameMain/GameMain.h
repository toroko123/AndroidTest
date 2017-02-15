#pragma once

#pragma once

#include "cocos2d.h"

class GameMain : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	GameMain();
	~GameMain();
	virtual bool init();
	void menuCloseCallback(cocos2d::Ref* pSender);
	CREATE_FUNC(GameMain);

private:

};
