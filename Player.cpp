#include "Player.h"
#include <iostream>

Player::Player(int level, int kills) {
	this->kills = kills;
	this->level = level;
	leftChild = 0;
	rightChild = 0;
}
void Player::Display() {
	std::cout << "Level : " << this->level << " Kills : " << this->kills << std::endl;
}