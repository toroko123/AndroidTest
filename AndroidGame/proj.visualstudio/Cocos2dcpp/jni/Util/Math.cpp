#include"Math.h"


namespace util {

	Vec2 centerSize() {
		auto visibleSize = Director::getInstance()->getVisibleSize();
		Vec2 origin = Director::getInstance()->getVisibleOrigin();
		return Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);
	}

}