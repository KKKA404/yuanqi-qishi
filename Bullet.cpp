#include "Bullet.h"

bool Bullet::init() {
	if (!Entity::init()) {
		return false;
	}

	return true;
	
}

void Bullet::MovebyLine() {
		this->getSprite()->setPositionX(this->getSprite()->getPositionX() + 4);
}
	

void Bullet::Fade() {

}