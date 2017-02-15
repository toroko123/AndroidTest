#pragma once

#include "cocos2d.h"

class TitleScene : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	TitleScene();
	~TitleScene();
	virtual bool init();
	void menuCloseCallback(cocos2d::Ref* pSender);
	CREATE_FUNC(TitleScene);

private:

};
