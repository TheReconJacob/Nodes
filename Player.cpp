#include "Player.h"
#include <iostream>

Player::Player(int level, int kills) {
	this->kills = kills;
	this->level = level;
	leftChild = 0;
	rightChild = 0;
}
void Player::Display() {
	int score = Factorial(level) * kills;
	std::cout << "Level : " << this->level << " Kills : " << this->kills << " Score: " << score << std::endl;
}

int Player::Factorial(int n) {
	if (n == 1)
		return 1;
	return Factorial(n - 1) * n;
}

bool Player::LessThan(Player* p1, Player* p2) {
	int scoreA = Factorial(p1->level) * p1->kills;
	int scoreB = Factorial(p2->level) * p2->kills;
	if (scoreA < scoreB)
		return true;
	else
		return false;
}