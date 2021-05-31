#include"Gun.h"

bool Gun::init() {
	if (!Entity::init()) {
		return false;
	}
	
	return true;
}

//这个函数参数可以传枪支的坐标，这样让子弹的初始坐标在枪支前面一点。
void Gun::createBullets() {
	Bullet* bullet = Bullet::create();
	bullet->bindSprite(Sprite::create("fireBullet.png"));
	bullet->getSprite()->setPosition(Point(145, 105));//先随便设置初始位置
	this->addChild(bullet);//显示出子弹
	this->BulletsVector.pushBack(bullet);//把创建的子弹插到自己的vector中
}
void Gun::Fire() {
	this->createBullets();

}