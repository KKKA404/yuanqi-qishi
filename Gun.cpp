#include"Gun.h"

bool Gun::init() {
	if (!Entity::init()) {
		return false;
	}
	
	return true;
}

//��������������Դ�ǹ֧�����꣬�������ӵ��ĳ�ʼ������ǹ֧ǰ��һ�㡣
void Gun::createBullets() {
	Bullet* bullet = Bullet::create();
	bullet->bindSprite(Sprite::create("fireBullet.png"));
	bullet->getSprite()->setPosition(Point(145, 105));//��������ó�ʼλ��
	this->addChild(bullet);//��ʾ���ӵ�
	this->BulletsVector.pushBack(bullet);//�Ѵ������ӵ��嵽�Լ���vector��
}
void Gun::Fire() {
	this->createBullets();

}