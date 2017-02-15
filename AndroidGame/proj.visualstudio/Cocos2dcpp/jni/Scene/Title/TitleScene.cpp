#include"TitleScene.h"
#include "SimpleAudioEngine.h"
#include<Util\Math.h>
#include<Scene\GameMain\GameMain.h>

USING_NS_CC;

Scene * TitleScene::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = TitleScene::create();

	// add layer as a child to scene
	scene->addChild(layer);



	// return the scene
	return scene;
}

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

bool TitleScene::init()
{
	if (!Layer::init())
	{
		return false;
	}
	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	auto closeItem = MenuItemImage::create(
		"Start.png",
		"Start2.png",
		CC_CALLBACK_1(TitleScene::menuCloseCallback, this));

	closeItem->setPosition(Vec2(util::centerSize().x,
		origin.y + closeItem->getContentSize().height / 2));

	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu, 1);

	auto sprite = Sprite::create("Bg.png");

	// position the sprite on the center of the screen
	sprite->setPosition(util::centerSize());

	// add the sprite as a child to this layer
	this->addChild(sprite, 0);


	return true;
}

void TitleScene::menuCloseCallback(Ref * pSender)
{
	Director::getInstance()->replaceScene(GameMain::createScene());
}
