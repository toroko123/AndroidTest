#include"GameMain.h"
#include "SimpleAudioEngine.h"
#include<Util\Math.h>

USING_NS_CC;

Scene * GameMain::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = GameMain::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

GameMain::GameMain()
{
}

GameMain::~GameMain()
{
}

bool GameMain::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();


	auto sprite = Sprite::create("Player.png");

	// position the sprite on the center of the screen
	sprite->setPosition(util::centerSize());

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);


	return true;
}

void GameMain::menuCloseCallback(Ref * pSender)
{
	//TODO Ÿ‚ÌƒV[ƒ“‚ÉØ‚è‘Ö‚¦‚é
}
